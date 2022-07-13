/**
* Calculation the mass of air in an automobile tyre using
 * the formula.
 * PV = 0.37m(T+460)
*
* By: Santa Basnet
* Everest Engineering College.
* Date: 2022-07-10
*/
#include<stdio.h>

int main() {
    float m, P, V, T;
    printf("Input Pressure: ");
    scanf("%f", &P);
    printf("Input Volume: ");
    scanf("%f", &V);
    printf("Input Temperature: ");
    scanf("%f", &T);
    /** Calculation **/
    m = (P * V) / (0.37f * (T + 460.0f));
    printf("\nCalculated mass is %.4f pounds.\n", m);
    return 0;
}