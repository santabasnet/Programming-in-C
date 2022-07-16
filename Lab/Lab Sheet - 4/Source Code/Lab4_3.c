/**
 * Subject: Programming in C.
 * Title: Iterative(Loop) Statements.
 * Lab Sheet - 4 Q. NO. 3: Find the area under the curve.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 15/07/2022
 */

#include <stdio.h>

/** Integration function **/
#define f(x) (((x)*(x)) + (x))
#define h 0.01f

/** Given constants **/
const int a = 1;
const int b = 5;

int main() {
    float sum = 0.0f;
    for (float begin = (float) a; begin <= (float) b; begin += h)
        sum += ((float) f(begin) * h);
    printf("Area under the curve is %.2f unit.\n", sum);
    return 0;
}

/**
* Output: Area under the curve is 53.19 unit.
*/