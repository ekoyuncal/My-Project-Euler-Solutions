//https://projecteuler.net/problem=1
/*

What is the largest prime factor of the number 600851475143 ?

*/
#include <stdio.h>

int main(void){
	long long number = 600851475143L;

	int divider = 2;
	int largestPrimeF = divider;
	
	while( number > 1){
		while( number % divider == 0)
		{
			number = number / divider;
			
			if(divider > largestPrimeF){ largestPrimeF = divider;}
		}
			
		divider++;	
	}
	printf("Number : %llu", number);
	printf("Largest Prime Factor: %d", largestPrimeF);
	return 0;
}
