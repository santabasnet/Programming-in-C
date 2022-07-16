/**
 * Subject: Programming in C.
 * Title: Decision Statements.
 * Lab Sheet - 3 Q. NO. 1c: Identify point P1 is closer to P2 or P3 based on
 * Manhattan distance between two points.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 15/07/2022
 */

#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    /** Input **/
    printf("Input P1(x1, y1): ");
    scanf("%d, %d", &x1, &y1);
    printf("Input P2(x2, y2): ");
    scanf("%d, %d", &x2, &y2);
    printf("Input P3(x3, y3): ");
    scanf("%d, %d", &x3, &y3);
    /** Distance Calculation **/
    int d1 = ((x2 - x1) < 0 ? -(x2 - x1) : (x2 - x1)) + ((y2 - y1) < 0 ? -(y2 - y1) : (y2 - y1));
    int d2 = ((x3 - x1) < 0 ? -(x3 - x1) : (x3 - x1)) + ((y3 - y1) < 0 ? -(y3 - y1) : (y3 - y1));
    /** Display Result **/
    if(d1 < d2) printf("P2(%d,%d) is closer to P1(%d,%d) than P3(%d,%d).", x2, y2, x1, y1, x3, y3);
    else if(d1 == d2) printf("P2(%d,%d) is equidistant to P1(%d,%d) with P3(%d,%d).", x2, y2, x1, y1, x3, y3);
    else printf("P3(%d,%d) is closer to P1(%d,%d) than P2(%d,%d).", x3, y3, x1, y1, x2, y2);
    return 0;
}

/**
 * Output :
 * Input P1(x1, y1): 1, 1
 * Input P2(x2, y2): 3, 3
 * Input P3(x3, y3): 5, 5
 * P2(3,3) is closer to P1(1,1) than P3(5,5).
 */