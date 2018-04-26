// 
// https://projecteuler.net/problem=1
//
#include <iostream>

int main()
{
    long int sum = 0;
    // iterating integers below 1000
    for (int i = 1; i < 1000; ++i){
        // checking multiplicity
        if (i % 3 == 0 || i % 5 == 0) 
            sum += i;
    }
    std::cout << sum << std::endl;
    return 0;
}
