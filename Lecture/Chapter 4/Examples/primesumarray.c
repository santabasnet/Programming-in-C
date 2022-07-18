/** Find the sum of prime numbers in an array. **/
/** Source by: Santa. **/
/** Everest Engineering College. **/
/** 2022-07-18 **/

#include <stdio.h>

#define MAX_SIZE 10

#define TRUE 1
#define FALSE 0

/** Check wheather the number is prime or not !" **/
int isPrime(int number){
	for(int i = 2; i <= number/2; i++){
		if(number % i == 0) return FALSE;	
	}	
	return TRUE;
}

int main(){
	int numbers[MAX_SIZE] = {11, 24, 68, 3, 9, 100, 53, 23, 99, 78}; 
	/** Accumulate prime numbers **/
	int primeNumbers[MAX_SIZE], primeCount = 0;
	for(int index = 0; index < MAX_SIZE; index ++){
		if(isPrime(numbers[index])) {
			primeNumbers[primeCount++] = numbers[index];
		}
	}	
	/** Find the sum of accumulated numbers **/
	int sum = 0;
	for(int index = 0; index < primeCount; index ++) 
		sum += primeNumbers[index];
		
	/** Display Result **/
	printf("\nPrimes in the given array: ");
	for(int i = 0; i < primeCount; i ++){
		printf("%d\t", primeNumbers[i]);
	}
	printf("\nSum of prime numbers : %d\n", sum);	
}

/**
Output:
	Primes in the given array: 11	3	53	23	
	Sum of prime numbers : 90
**/

