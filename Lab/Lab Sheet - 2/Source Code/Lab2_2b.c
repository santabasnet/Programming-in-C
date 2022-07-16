/**
 * Subject: Programming in C.
 * Title: Selection of Appropriate Data Type.
 * Lab Sheet - 2 Q. NO. 2b: Universal Law of Gravitation.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 15/07/2022
 */

#include <stdio.h>

const double G = 6.674e-11;

int main() {

    double m1 = 7.34e22;
    double m2 = 5.97e24;
    double r = 384400.0f * 1000.0f;
    double f = (G * (m1 * m2)) / (r * r);
    printf("Gravitation Force: %e\n", f);

    return 0;
}

/**
 * Output:
 * Gravitation Force: 1.979201e+20
*/