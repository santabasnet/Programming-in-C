/**
 * Subject: Programming in C.
 * Lab Sheet 7 Q. NO. 3: Sorting String in C.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 11/07/2022
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define N 5
#define SIZE 100

/** Take Input strings as names. I am initializing here. **/
char **inputNames() {
    char **names = (char **) malloc(sizeof(char) * N);
    for (int i = 0; i < N; i++) *(names + i) = (char *) malloc(sizeof(char) * SIZE);
    *(names + 0) = "Ram";
    *(names + 1) = "Hari";
    *(names + 2) = "Anup";
    *(names + 3) = "Krishna";
    *(names + 4) = "Shyam";
    return names;
}

/** String Compare. **/
int stringCompare(char *str1, char *str2) {
    char *tStr1 = str1;
    char *tStr2 = str2;
    char c1, c2;
    do {
        c1 = *tStr1++;
        c2 = *tStr2++;
        if (c1 == '\0' && c2 == '\0') return 0;
        else if (c1 == '\0') return -1;
    } while (c1 == c2);
    if (c1 - c2 < 1) return -1;
    else if (c1 == c2) return 0;
    else return 1;
}

char *copyString(char *src){
    char *dString = (char *)malloc(sizeof(char) * strlen(src));
    strcpy(dString, src);
    return dString;
}

/** Perform String Sorting **/
char **sortedNames(char **names) {
    char *tString = NULL;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (stringCompare(*(names + i), *(names + j)) > 0) {
                tString = copyString(*(names+i));
                *(names + i) = copyString(*(names + j));
                *(names + j) = copyString(tString);
            }
        }
    }
    return names;
}

/** Display Names **/
void displayNames(char **names, char *message) {
    printf(message);
    printf("\n----------------------\n");
    for (int i = 0; i < N; i++) {
        printf(*(names + i));
        printf("\n");
    }
    printf("----------------------\n");
}

int main() {
    /** 8a. Read Names from Function **/
    char **names = inputNames();
    displayNames(names, "Given Names:");

    /** 8b. Sort Names from the Function **/
    char **sNames = sortedNames(names);
    displayNames(sNames, "Sorted Names:");

    free(sNames);
    return 0;
}

/**
* Output:
 * Given Names:
 * ----------------------
 * Ram
 * Hari
 * Anup
 * Krishna
 * Shyam
 * ----------------------
 * Sorted Names:
 * ----------------------
 * Anup
 * Hari
 * Krishna
 * Ram
 * Shyam
 * ----------------------
*/