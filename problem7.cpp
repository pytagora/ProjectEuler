//
// https://projecteuler.net/problem=7
//

#include <iostream>
#include <math.h>

// check for prime number
bool IsPrime(int number){
    int q = sqrt(number);
	// math condition
    for (int i = 2; i <= q; ++i){
        if (number % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    
	// looking for 10001th prime num
    int limit = 10001;
    unsigned long int it = 2;
	// for prime numbers
    int counter = 0;
    while(counter < limit){
        if (IsPrime(it) == true)
            ++counter;   
        ++it;
    }
	// bingo!
    std::cout << --it;
    return 0;   
}
