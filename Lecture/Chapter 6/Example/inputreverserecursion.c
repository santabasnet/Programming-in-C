/**
 * Display input characters using Recursive Function.
 *
 * Author: Santa
 * Everest Engineering College.
 * Date: 2022-07-04
 */

#include<stdio.h>

void reverse(void);

int main() {
    reverse();
    return 0;
}

/** Read a single line of characters and print in reverse order **/
void reverse() {
    char c = getchar();
    if (c != '\n') reverse();
    putchar(c);
    return;
}