/**
 * Subject: Programming in C.
 * Function Call, nested call.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 10/07/2022
 */

#include<stdio.h>
int add(int a, int b){
    return a + b;
}
int addP(int *a, int *b){
    return (*a + *b);
}
int fib(int n){
    if(n <= 1) return n;
    else return fib(n-1) + fib(n-2);
}
int addT(int a, int b, int c){
    return add(add(a, b), c);
}
int main() {
    printf("%d", addT(100, 200, 500));

    int x = 100;
    int y = 200;
    int r = addP(&x, &y);//pass address here.
    printf("\nFib(10) = %d\n", fib(10));

    return 0;
}