/**
 * Subject: Programming in C.
 * Title: Decision Statements.
 * Lab Sheet - 3 Q. NO. 1a: Absolute value of a number.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 15/07/2022
 */

#include <stdio.h>

int main() {
    int x;
    printf("Input Number: ");
    scanf("%d", &x);
    int absValue = x < 0 ? -x : x;
    printf("Absolute value of %d is %d.", x, absValue);
    return 0;
}

/**
* Output:
Input Number: -80
Absolute value of -80 is 80.
*/