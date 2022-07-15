/**
 * Subject: Programming in C.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 14/07/2022
 */


#include<stdio.h>

/**
 * fseek, fell example.
 */

const char input[100] = "input.txt";

int main() {
    FILE *fp = fopen(input, "r");
    char ch = fgetc(fp);
    fprintf(stdout, "Char at the beginning of file is %c.\n", ch);

    fseek(fp, 23, SEEK_SET);
    ch = fgetc(fp);
    printf("Char at %ld position is %c.\n", ftell(fp), ch);
    /*char in[100];
    fgets(in, 100, fp);
    fputs(in, stdout);*/
    return 0;
}
