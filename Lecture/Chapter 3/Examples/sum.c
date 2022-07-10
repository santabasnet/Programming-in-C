/* This is my first program. */

#include <stdio.h>

float average(int, int);
long sum (int);

int main()
{
    int n;
    printf("Enter N : ");
    scanf("%d",&n);
	printf("Sum of first %d numbers = %ld\n",n,sum(n));
	return(1);
}

float average (int a, int b){
    return((a+b)/2.0);
}

long sum (int n){
    long sum = 0;
    int i;
    for(i = 0;i<=n; i++)
        sum += i;
    return(sum);
}
