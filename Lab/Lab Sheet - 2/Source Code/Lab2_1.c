/**
 * Subject: Programming in C.
 * Title: Selection of Appropriate Data Type.
 * Lab Sheet - 2 Q. NO. 1: Series and Parallel combination of circuits.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 15/07/2022
 */

#include <stdio.h>

#define series(r1, r2) ((r1)+(r2))
#define parallel(r1, r2) (((r1)*(r2))/((r1)+(r2)))
#define current(v, r) ((v)/(r))

int main() {
    /** a. Set One: {v1 = 5V, r1 = 10Ohm, r2 = 100Ohm} **/
    int v1 = 5, r1 = 10, r2 = 100;
    float iSeries = (float) v1 / ((float) series(r1, r2));
    float iParallel = (float) v1 / ((float) parallel(r1, r2));
    printf("Current with series combination:\t%.2fA\n", iSeries);
    printf("Current with parallel combination:\t%.2fA\n", iParallel);

    /** a. Set Two: {v1 = 20V, r1 = 100Ohm, r2 = 1KOhm} **/
    v1 = 20, r1 = 100, r2 = 1000;
    iSeries = (float) v1 / ((float) series(r1, r2));
    iParallel = (float) v1 / ((float) parallel(r1, r2));
    printf("Current with series combination:\t%.2fA\n", iSeries);
    printf("Current with parallel combination:\t%.2fA\n", iParallel);

    return 0;
}

/**
* Output:
Current with series combination:	0.05A
Current with parallel combination:	0.56A
Current with series combination:	0.02A
Current with parallel combination:	0.22A
*/