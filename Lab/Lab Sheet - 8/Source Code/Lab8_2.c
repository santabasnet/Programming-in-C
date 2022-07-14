/**
 * Subject: Programming in C.
 * Lab Sheet - 8 Q. NO. 2: Simple Encryption and Decryption Demo.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 14/07/2022
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SIZE 256

/**
 * Perform Encryption with addition 1, but makes circular
 * with alphabetic order.
 * @param ch
 * @return encryptedChar
 */
char encode(char ch) {
    if (ch == 'Z') return 'A';
    else if (ch == 'z') return 'a';
    else return ch + 1;
}

/**
 * Perform Encryption with subtraction 1, but makes circular
 * with alphabetic order.
 * @param ch
 * @return decryptedChar
 */
char decode(char ch) {
    if (ch == 'A') return 'Z';
    else if (ch == 'a') return 'z';
    else return ch - 1;
}

/** Take input from file **/
char *inputText(const char *fileName) {
    char *content = (char *) malloc(sizeof(char) * MAX_SIZE);
    *content = '\0';
    FILE *fp = fopen(fileName, "r");
    if (fp == NULL) return content;
    /** Read Text from file. **/
    char ch = fgetc(fp);
    int count = 0;
    while (!feof(fp)) {
        *(content + count++) = ch;
        ch = fgetc(fp);
    }
    *(content + count) = '\0';
    fclose(fp);
    return content;
}

/** Write output to file **/
void writeText(const char *fileName, char *text) {
    FILE *fp = fopen(fileName, "w");
    if (fp == NULL) return;
    while (*text != '\0') {
        fprintf(fp, "%c", *text);
        text++;
    }
    fclose(fp);
}

/** Perform Encryption Here **/
char *encrypt(char *text) {
    char *message = (char *) malloc((strlen(text) + 1) * sizeof(char));
    int count = 0;
    while (count < strlen(text)) {
        char ch = text[count];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            ch = encode(ch);
        message[count ++] = ch;
    }
    message[count] = '\0';
    return message;
}

/** Perform Decryption Here **/
char *decrypt(char *text) {
    char *message = (char *) malloc((strlen(text) + 1) * sizeof(char));
    int count = 0;
    while (*text != '\0') {
        char ch = *text;
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
            ch = decode(ch);
        *(message + count++) = ch;
        text++;
    }
    *(message + count++) = '\0';
    return message;
}

/** Display Text with the given title. **/
void displayOutput(char *title, char *text) {
    fprintf(stdout, title);
    fprintf(stdout, ": \n");
    fprintf(stdout, text);
    fprintf(stdout, "\n");
}

int main() {
    const char inputFile[100] = "inputText.txt";
    const char outputFile1[100] = "outputText1.txt";
    const char outputFile2[100] = "outputText2.txt";

    /** 1. Read input text from file and encrypt it. **/
    char *textInput = inputText(inputFile);
    displayOutput("Input Message", textInput);

    char *textEncrypted = encrypt(textInput);
    displayOutput("Encrypted Message", textEncrypted);
    writeText(outputFile1, textEncrypted);

    /** 2. Read from encrypted text file and decrypt it. **/
    char *encryptedInput = inputText(outputFile1);
    char *textDecrypted = decrypt(encryptedInput);
    displayOutput("Decrypted Message", textDecrypted);
    writeText(outputFile2, textDecrypted);

    return 0;
}
