/**
 * Subject: Programming in C.
 * Title: Iterative(Loop) Statements.
 * Lab Sheet - 4 Q. NO. 2: Prime number between given two numbers.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 15/07/2022
 */

#include <stdio.h>

#define TRUE    1
#define FALSE   0

/** Main function, exits with 0 return. **/
int main() {
    int m, n;
    printf("Enter m & n: ");
    scanf("%d %d", &m, &n);
    printf("Prime Numbers: ");
    for (int i = m; i <= n; i++) {
        int isPrime = TRUE;
        for (int k = 2; k <= i / 2; k++) {
            if (i % k == 0) {
                isPrime = FALSE;
                break;
            }
        }
        if (isPrime) printf("\t%d", i);
    }
    printf("\n");
    return 0;
}

/**
* Output:
* Enter m & n: 2 30
* Prime Numbers: 	2	3	5	7	11	13	17	19	23	29
*/