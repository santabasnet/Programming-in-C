/**
 * Subject: Programming in C.
 * Lab Sheet - 8 Q. NO. 1: Input/Output through IO buffer.
 * a. stdin
 * b. stdout
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 14/07/2022
 */

#include<stdio.h>

int readValue(char *message) {
    int value;
    fprintf(stdout, "%s: ", message);
    fscanf(stdin, "%d", &value);
    return value;
}

void displayOutput(int sum, char *message) {
    fprintf(stdout, "\n%s: %d\n", message, sum);
}

int main() {
    int a = readValue("First Value");
    int b = readValue("Second Value");
    int sum = a + b;
    displayOutput(sum, "The summation : ");
    return 0;
}
/** Output:
 * First Value: 100
 * Second Value: 345

 * The summation : : 445
 */