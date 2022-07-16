/**
 * Subject: Programming in C.
 * Title: Selection of Appropriate Data Type.
 * Lab Sheet - 2 Q. NO. 2a: Universal Law of Gravitation.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 15/07/2022
 */

#include <stdio.h>

const double g = 0.00000000006674F;

int main() {

    float m3 = 10.0f;
    float m4 = 20.0f;
    float r1 = 2.0f;
    double f1 = (g * (m3 * m4)) / (r1 * r1);
    printf("Gravitation Force: %.12f\n", f1);

    return 0;

}

/**
 * Output:
 * Gravitation Force: 0.000000003337
*/