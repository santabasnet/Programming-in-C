/**
 * Matrix input/output from a File,
 * Read a matrix from a file and output its transpose
 * to a file.
 * Author: Santa
 * Everest Engineering College.
 * Date: 2022-07-04
 */

#include<stdio.h>

const int ROW = 3;
const int COLUMN = 3;

int main() {
    const char input[100] = "inputmatrix.txt";
    int number, mat[ROW][COLUMN];
    FILE *fInput = fopen(input, "r");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            fscanf(fInput, "%d ", &number);
            mat[i][j] = number;
        }
    }
    fclose(fInput);
    /** Display Input Matrix **/
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMN; j++) {
            printf("%6d\t", mat[i][j]);
        }
        printf("\n");
    }

    /** Transpose Matrix **/
    int matT[ROW][COLUMN];
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j<COLUMN; j++){
            matT[j][i] = mat[i][j];
        }
    }
    /** Writing Transpose Matrix to a file. **/
    const char output[100] = "/home/santa/work/output/transpose.txt";
    FILE *fOutput = fopen(output, "w");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMN; j++) {
            fprintf(fOutput, "%d ", matT[i][j]);
        }
        fprintf(fOutput, "\n");
    }
    fclose(fOutput);
    return 0;
}
