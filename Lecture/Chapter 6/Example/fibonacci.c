/**
 * Fibonacci Sequence example.
 * (Recursive and Non-Recursive)
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 10/07/2022
 */

#include<stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    else fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int t1 = 1, t2 = 1;
    int nth;
    printf("Give nth term : ");
    scanf("%d", &nth);

    if (nth == 1) printf("%d", t1);
    else if (nth == 2) printf("%d", t2);
    else {
        for (int k = 3; k <= nth; k++) {
            int tmp = t2;
            t2 = t1 + t2;
            t1 = tmp;
            printf("%d\t", t1);
        }
        printf("\n%d\n", t2);
    }

    return 0;
}