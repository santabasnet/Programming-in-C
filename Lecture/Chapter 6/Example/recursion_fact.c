/**
 * Simple Recursion of Factorial Function.
 *
 * Author: Santa
 * Everest Engineering College.
 * Date: 2022-07-04
 */

#include<stdio.h>

unsigned long int factorial(int n) {
    if (n <= 1) return 1;
    else return (n * factorial(n - 1));
}

int main() {
    int x = 25;
    unsigned long result = factorial(x);
    printf("Factorial of %d = %ld\n", x, result);
    return 0;
}