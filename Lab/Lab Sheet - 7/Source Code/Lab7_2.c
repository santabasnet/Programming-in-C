/**
 * Subject: Programming in C.
 * Lab Sheet 7 Q. NO. 2: String operations using Character pointers.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 11/07/2022
 */

#include<stdlib.h>
#include<string.h>
#include<stdio.h>

/** Function Prototypes **/
char upperCaseChar(char);

char *stringToUpper(char *);

char *stringToLower(char *);

char *stringReverse(char *);

char *stringCat(char *, char *);

int stringCompare(char *, char *);

char *subString(char *, int, int);

int main() {
    char s[10] = "Nepal";
    char s2[10] = "nep";
    printf("Output: \n");
    /** 1. Usage of stringCat **/
    printf("1. Concatenation of %s and %s is %s.\n", s, s2, stringCat(s, s2));
    /** 2. Usage of stringToUpper **/
    printf("2. String upper case of %s is %s.\n", s, stringToUpper(s));
    /** 3. Usage of stringToLower **/
    printf("3. String lower case of %s is %s.\n", s, stringToLower(s));
    /** 4. Usage of subString **/
    printf("4. Sub-String of %s from %d to %d is %s.\n", s, 2, 2, subString(s, 2, 2));
    /** 5. Usage of stringCompare **/
    printf("5. String comparison of %s and %s is %d.\n", s, s2, stringCompare(s, s2));
    /** 6. Usage of stringReverse **/
    printf("6. String reverse of %s is %s.\n", s, stringReverse(s));
    return 0;
}

/** Character uppercase conversion. **/
char upperCaseChar(char ch) {
    return ch >= 'a' && ch <= 'z' ? ch - 32 : ch;
}

/** Character uppercase conversion. **/
char lowerCaseChar(char ch) {
    return ch >= 'A' && ch <= 'Z' ? ch + 32 : ch;
}

/** 2a. Perform String Concatenation **/
char *stringCat(char *s1, char *s2) {
    int size = strlen(s1) + strlen(s2);
    char *result = (char *) malloc(sizeof(char) * (size + 1));
    int count = 0;
    while (*s1) {
        *(result + count++) = *s1;
        s1++;
    }
    while (*s2) {
        *(result + count++) = *s2;
        s2++;
    }
    *(result + count) = '\0';
    return result;
}

/** 2b. Text uppercase conversion. **/
char *stringToUpper(char *text) {
    int index;
    char *result = (char *) malloc(strlen(text) * sizeof(char));
    for (index = 0; *(text + index) != '\0'; index++) *(result + index) = upperCaseChar(*(text + index));
    *(result + index) = '\0';
    return (result);
}

/** 2c. Text uppercase conversion. **/
char *stringToLower(char *text) {
    int index;
    char *result = (char *) malloc(strlen(text) * sizeof(char));
    for (index = 0; *(text + index) != '\0'; index++) *(result + index) = lowerCaseChar(*(text + index));
    *(result + index) = '\0';
    return (result);
}

/** 2d. Substring extraction. **/
char *subString(char *src, int from, int to) {
    int len = strlen(src);
    if (len < from || len < (from + to)) return NULL;
    else {
        int cnt;
        char *result = (char *) malloc(sizeof(char) * (to + 1));
        for (int i = from, cnt = 0; i < (from + to); i++, cnt++) *(result + cnt) = *(src + i);
        *(result + cnt) = '\0';
        return result;
    }
}

/** 2e. String Compare. **/
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

/** 2f. Text uppercase conversion. **/
char *stringReverse(char *src) {
    int index, size = strlen(src);
    char *result = (char *) malloc(size * sizeof(char));
    for (index = size - 1; index >= 0; index--) *(result + (size - index - 1)) = *(src + index);
    *(result + (size - index - 1)) = '\0';
    return (result);
}

/**
* Output:
* 1. Concatenation of Nepal and nep is Nepalnep.
* 2. String upper case of Nepal is NEPAL.
* 3. String lower case of Nepal is nepal.
* 4. Sub-String of Nepal from 2 to 2 is pa.
* 5. String comparison of Nepal and nep is -1.
* 6. String reverse of Nepal is lapeN.
*/