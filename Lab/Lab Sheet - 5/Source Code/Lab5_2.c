/**
 * Subject: Programming in C.
 * Lab Sheet 5 Q. NO. 2: Program to check whether the given matrix is skew-symmetric or not.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 15/07/2022
 */
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define ROW 3
#define COLUMN 3

int main() {
    /** ROW and COLUMN should be equal for Square Matrix. **/
    if (ROW != COLUMN) {
        printf("Matrix is not square.\n");
        return EXIT_SUCCESS;
    }
    /** Input Matrix **/
    int mat[ROW][COLUMN] = {
            {0,  2, -1},
            {-2, 0, -4},
            {1,  4, 0}
    };
    /** Display Input Matrix **/
    printf("Input Matrix: \n");
    for (int r = 0; r < ROW; r++) {
        for (int c = 0; c < COLUMN; c++) {
            printf("\t%d", mat[r][c]);
        }
        printf("\n");
    }
    /** Transform to Transpose Matrix **/
    int matT[ROW][COLUMN];
    for (int r = 0; r < ROW; r++) {
        for (int c = 0; c < COLUMN; c++) {
            matT[r][c] = mat[c][r];
        }
    }

    /** Display Transpose Matrix **/
    printf("Transpose Matrix: \n");
    for (int r = 0; r < ROW; r++) {
        for (int c = 0; c < COLUMN; c++) {
            printf("\t%d", matT[r][c]);
        }
        printf("\n");
    }

    /** Check if all items zero for sum matrix. */
    int isSkew = TRUE;
    for (int r = 0; r < ROW; r++) {
        for (int c = 0; c < COLUMN; c++) {
            if (matT[r][c] + mat[r][c] != 0) {
                isSkew = FALSE;
                break;
            }
        }
    }
    /** Display final result. **/
    printf("\nResult: \n");
    if (isSkew) printf("Given matrix is skew-symmetric.\n");
    else printf("Given matrix is not skew-symmetric.\n");

    return EXIT_SUCCESS;
}

/**
* Output:
Input Matrix:
	0	2	-1
	-2	0	-4
	1	4	0
Transpose Matrix:
	0	-2	1
	2	0	4
	-1	-4	0

Result:
Given matrix is skew-symmetric.

*/