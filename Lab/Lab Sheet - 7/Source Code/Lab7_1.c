/**
 * Subject: Programming in C.
 * Lab Sheet 7 Q. NO. 1: Matrix operations using dynamic memory allocation.
 * a. Addition
 * b. Multiplication
 * c. Transpose
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 11/07/2022
 */

#include<stdio.h>
#include<stdlib.h>

#define MAX_ROW 2
#define MAX_COL 2

/** Function Prototypes **/
int **allocateMatrix(int, int);

int **allocateZeroMatrix(int, int);

int **initMatrix(int, int);

void displayMatrix(int **, int, int, char *);

int **transposeOf(int **, int, int);

int **matrixAddition(int **, int **, int, int);

int **matrixMultiplication(int **, int, int, int **, int, int);

int **transposeAddition(int **, int **, int, int);

int main() {
    int r = MAX_ROW, c = MAX_COL;
    int **mat1 = initMatrix(r, c);
    int **mat2 = initMatrix(r, c);
    displayMatrix(mat1, r, c, "Given Matrix (m1)");
    displayMatrix(mat2, r, c, "Given Matrix (m2)");

    /** 1. Perform Addition Operation **/
    int **aResult = matrixAddition(mat1, mat2, r, c);
    displayMatrix(aResult, r, c, "Addition Result Matrix");

    /** 2. Perform Multiplication Operation **/
    int **mResult = matrixMultiplication(mat1, r, c, mat2, r, c);
    displayMatrix(mResult, r, c, "Multiplication of Matrix");

    /** 3. Perform Addition of Transpose Matrix **/
    int **mat1T = transposeOf(mat1, r, c);
    int **mat2T = transposeOf(mat2, r, c);
    int **aTResult = matrixAddition(mat1T, mat2T, c, r);
    displayMatrix(aTResult, r, c, "Addition of Transpose Matrix");

    free(mat1);
    free(mat2);
    free(aResult);
    free(aTResult);
    return 0;
}

int **allocateMatrix(int row, int column) {
    int **m = (int **) malloc(sizeof(int) * row);
    for (int i = 0; i < row; i++) *(m + i) = (int *) malloc(sizeof(int) * column);
    return m;
}

/** Allocate and Initialize 0 as a default value. **/
int **allocateZeroMatrix(int row, int column) {
    int **m = allocateMatrix(row, column);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            *(*(m + i) + j) = 0;
        }
    }
    return m;
}

/** Initialize a matrix, it initialize the first natural number from 1 to (row * column)th terms. **/
int **initMatrix(int row, int column) {
    int **m = allocateMatrix(row, column);
    /** Initialize Data Here **/
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            *(*(m + i) + j) = (i * row) + j + 1;
        }
    }
    return m;
}

/** Display the given matrix in the console. **/
void displayMatrix(int **mat, int row, int column, char *msg) {
    printf("\n%s: \n", msg);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d\t", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

/** Implementation of matrix transpose with Pointer **/
int **transposeOf(int **given, int row, int column) {
    int **result = allocateMatrix(row, column);
    for (int i = 0; i < row; i++) {
        *(result + i) = (int *) malloc(sizeof(int) * column);
        for (int j = 0; j < column; j++) {
            *(*(result + i) + j) = *(*(given + j) + i);
        }
    }
    return result;
}

/** Addition of matrix. **/
int **matrixAddition(int **m1, int **m2, int row, int column) {
    int **result = allocateMatrix(row, column);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            *(*(result + i) + j) = *(*(m1 + i) + j) + *(*(m2 + i) + j);
        }
    }
    return result;
}

/** Multiplication of two matrices **/
int **matrixMultiplication(int **m1, int r1, int c1, int **m2, int r2, int c2) {
    int **result = allocateZeroMatrix(r1, c2);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                *(*(result + i) + j) += *(*(m1 + i) + k) * *(*(m2 + k) + j);
            }
        }
    }
    return result;
}

/**
Program Output:
-------------------------------------
Given Matrix (m1):
1	2
3	4

Given Matrix (m2):
1	2
3	4

Addition Result Matrix:
2	4
6	8

Multiplication of Matrix:
7	10
15	22

Addition of Transpose Matrix:
2	6
4	8
-------------------------------------
*/