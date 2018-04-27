//
// https://projecteuler.net/problem=9
//

#include <iostream>
#include <math.h>



int main(){
    
    int a, b, c;
    int limit = 1000;
	// using math theory to get smaller loops
    int loop_max = limit/2;
    for (a = 1; a < loop_max; ++a){
        for (b = a + 1; b < loop_max; ++b){
            for (c = b + 1; c < loop_max; ++c){
				// check for Pythagorean triplet
                if (pow(a,2) + pow(b,2) == pow(c,2)){
					// additional condition for triplet
                    if (a + b + c == limit)
						// jump to the end
                        goto endloops;
                }
            }
        }   
    }
    endloops:
	// triplet's product
    std::cout << a * b *c;
    return 0;    
}
