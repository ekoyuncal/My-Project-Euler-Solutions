//https://projecteuler.net/problem=10
/*

The sum of the primes below 10 is 2+ 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

*/
#include <stdio.h>
#include <stdint.h>

int main(){
    uint64_t sum_primes = 0;

    for(int i = 2; i < 2000000; i++){
        int isPrime = 1;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
        sum_primes=sum_primes + i;
        }
    }
    printf("Sum of all the primes below two million: %llu", sum_primes);//Sum of all the primes below two million: 142913828922
    //[Done] exited with code=0 in 500.172 seconds :( I dont think this is the efficient one.
    return 0;
}