//https://projecteuler.net/problem=7
/*

By listing the first six prime numbers: 2,3,5,7,11 and 13, we can see that the 6th prime is 13.

What is the 10001st prime number?

*/
#include <stdio.h>

int main(){
    int counter = 0;

    for(int i = 2; i < 1000000; i++){
        int isPrime = 1;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1){
            counter++;
            if(counter == 10001){
                printf("10001st prime number is %d\n", i);
                break;
            }
        }
    }


    return 0;
}