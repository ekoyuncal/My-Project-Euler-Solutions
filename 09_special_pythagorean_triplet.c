//https://projecteuler.net/problem=9
/*

A Pythagorean triplet is a set of three natural numbers,a < b < c, for which,
                            a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which 
.
Find the product 
.

*/
#include <stdio.h>
#include <math.h>

int main(){
    int c = 0;
    int triplet_a=0;
    int triplet_b=0;
    int triplet_c=0;
    int sum = 1000;
    
    for (int a = 1; a < sum; a++) {
    for (int b = a; b < sum - a; b++) {
        int c = sum - a - b;
        if (a * a + b * b == c * c) {
            triplet_a = a;
            triplet_b = b;
            triplet_c = c;
        }
    }
}
    

    printf("a: %d, b: %d, and c: %d\nProduct of abc %d\n", triplet_a, triplet_b, triplet_c, triplet_a*triplet_b*triplet_c);//a: 200, b: 375, and c: 425
    //Product of abc 31875000

    return 0;
}