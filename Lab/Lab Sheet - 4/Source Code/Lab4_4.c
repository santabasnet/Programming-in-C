/**
 * Subject: Programming in C.
 * Title: Iterative(Loop) Statements.
 * Lab Sheet - 4 Q. NO. 4: Crude method of integer factorization.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 15/07/2022
 */

#include <stdio.h>

/**
 * Main program starts here.
 * @return 0 wth successful completion.
 */
int main() {
    int number;
    /** Input **/
    printf("\nGive Your Integer Number: ");
    scanf("%d", &number);

    /** Calculations **/
    printf("\nFactors are: ");
    printf("\n-----------------------------------------");
    int index = 2;
    int quotient = number;
    while(quotient > 1){
        int factor = quotient / index;
        if(quotient % index == 0){
            printf("\n|%4d divides %4d \twith quotient %4d. |", index, quotient, factor);
            printf("\n-----------------------------------------");
            index = 2;
            quotient = factor;
            continue;
        }
        index ++;
    }

    printf("\n");
    return 0;
}

/**
* Output:
Give Your Integer Number: 60

Factors are:
-----------------------------------------
|   2 divides   60 	with quotient   30. |
-----------------------------------------
|   2 divides   30 	with quotient   15. |
-----------------------------------------
|   3 divides   15 	with quotient    5. |
-----------------------------------------
|   5 divides    5 	with quotient    1. |
-----------------------------------------
*/