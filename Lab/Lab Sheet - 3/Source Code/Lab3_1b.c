/**
 * Subject: Programming in C.
 * Title: Decision Statements.
 * Lab Sheet - 3 Q. NO. 1b: Manhattan distance between two points.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 15/07/2022
 */

#include <stdio.h>

int main() {
    int x1, y1, x2, y2;
    printf("Input x1, y1, x2, y2: ");
    scanf("%d, %d, %d, %d", &x1, &y1, &x2, &y2);
    int mDistance = ((x2 - x1) < 0 ? -(x2 - x1) : (x2 - x1)) + ((y2 - y1) < 0 ? -(y2 - y1) : (y2 - y1));
    printf("Calculated manhattan distance = %d.", mDistance);
    return 0;
}

/**
* Output:
Input x1, y1, x2, y2: 1, 1, 3, 3
Calculated manhattan distance = 4.
*/