/**
 * Subject: Programming in C.
 * Title: Iterative(Loop) Statements.
 * Lab Sheet - 4 Q. NO. 1: Display Multiplication Table.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 15/07/2022
 */

#include<stdio.h>

int main() {
    int number, times;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("How many times: ");
    scanf("%d", &times);
    for (int i = 1; i <= times; i++) {
        printf("%3d * %2d = %3d\n", number, i, (number * i));
    }
    return 0;
}

/**
* Output:
Enter a number: 9
How many times: 10
  9 *  1 =   9
  9 *  2 =  18
  9 *  3 =  27
  9 *  4 =  36
  9 *  5 =  45
  9 *  6 =  54
  9 *  7 =  63
  9 *  8 =  72
  9 *  9 =  81
  9 * 10 =  90
*/