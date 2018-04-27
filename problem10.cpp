//
// https://projecteuler.net/problem=10
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
    
    unsigned long long int sum = 0;
	// limit
    unsigned long long int limit = 2*pow(10,6);
    unsigned long int it = 2;
    while(it < limit){
		// if prime add to the sum
        if (IsPrime(it) == true)
            sum += it;   
        ++it;
    }
    std::cout << sum;
    return 0;   
}
