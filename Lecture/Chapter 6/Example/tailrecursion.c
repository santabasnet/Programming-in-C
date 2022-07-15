/**
 * Implementation of tail recursive function to calculate
 * the factorial of a number.
 *
 * Author: Santa
 * Everest Engineering College.
 * Date: 2022-07-04
 */

#include<stdio.h>
/** Factorial with Tail Call Recursion. **/
unsigned long factorialGo(long number, long result) {
    if (number == 1) return result;
    else return factorialGo(number - 1, result * number);
}

/** A Factorial function that calls from Main. **/
unsigned long factorial(long number) {
    return factorialGo(number, 1);
}

int main() {
    unsigned long result = factorial(65);
    printf("Result : %lu\n", result);
    return 0;
}