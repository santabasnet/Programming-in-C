/**
 * Subject: Programming in C.
 * Title: Selection of Appropriate Data Type.
 * Lab Sheet - 2 Q. NO. 3: Currency calculation with integer numbers.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 15/07/2022
 */

#include <stdio.h>

#define THOUSAND        1000
#define FIVE_HUNDRED    500
#define HUNDRED         100
#define FIFTY           50
#define TWENTY          20
#define TEN             10
#define FIVE            5

int main() {
    int x1, x2, x3, x4, x5, x6, x7;
    printf("Enter x1, x2, x3, x4, x5, x6, x7 : \n");
    scanf("%d, %d, %d, %d, %d, %d, %d", &x1, &x2, &x3, &x4, &x5, &x6, &x7);
    int total = x1 * THOUSAND + x2 * FIVE_HUNDRED + x3 * HUNDRED + x4 * FIFTY + x5 * TWENTY + x6 * TEN + x7 * FIVE;
    printf("Total amount Jaikishan has : Rs %d", total);
    return 0;
}

/**
 * Output:
 * Enter x1, x2, x3, x4, x5, x6, x7 :
 * 1, 2, 3, 4, 5, 6, 7
 * Total amount Jaikishan has : Rs 2695
*/