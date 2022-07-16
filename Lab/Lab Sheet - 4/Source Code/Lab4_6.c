/**
 * Subject: Programming in C.
 * Title: Iterative(Loop) Statements.
 * Lab Sheet - 4 Q. NO. 6: Approximation of PI using Leibniz's series.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 15/07/2022
 */

#include<stdio.h>

int main() {
    double sum = 0.0f;
    for (int k = 0; k < 1000000; k++) {
        double numerator = k % 2 == 0 ? 1.0f : -1.0f;
        double denominator = 2.0f * (double) k + 1.0f;
        sum += numerator / denominator;
    }
    double pi = 4.0f * sum;
    printf("PI = %lf\n", pi);
    return 0;
}

/**
* Output: PI = 3.141592
*/