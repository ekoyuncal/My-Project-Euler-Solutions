//https://projecteuler.net/problem=5
/*

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

*/
#include <stdio.h>

int main()
{
	int smallest =1;
	int i = 0;
	int j = 0;
	int flag = 0;
	printf("Prime number under 21: ");
	for(j=2;j<22;j++){
		flag = 0;
		for(i=2;i<=j/2;i++){
			//Lets find prime numbers first
			if(j % i == 0){flag = 1;}
		}
		if(flag == 0){
			smallest*=j;
			
			printf("%d ",j);
		}		
	}
	printf("\nSmallest positive number that is evenly divisible by all of the numbers from 1 to 20 : %d", smallest);
	return 0;	
}
