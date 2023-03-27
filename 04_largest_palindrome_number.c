//https://projecteuler.net/problem=4
/*

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/
#include <stdio.h>

int main()
{
	int inputSayi = 0;
	int tempSayi = 0;
	int tersSayi=0;
	int i=0, j = 0;
	int largestP = 0;

	
	for(i=0;i<1000;i++){

		for(j=0;j<1000;j++){
			inputSayi = i * j;
			tersSayi = 0;
			
			tempSayi = inputSayi;
			while(tempSayi != 0){
				tersSayi *=10;
				tersSayi = tersSayi + tempSayi % 10;

		
				tempSayi /=10;
			}
			if(inputSayi == tersSayi){
				if(largestP < inputSayi){
					largestP = inputSayi;
				}

			}
		}
		

	}
	printf("Largest Palindrome Number: %d\n",largestP);
	return 0;
}
