//
// https://projecteuler.net/problem=5
//

#include <iostream>

bool check(int num){
    for (int i = 2; i < 21; ++i){
        // check are they even
        if (num % i != 0)
            return false;
    }
    return true;
}

int main()
{
    // starting point 
    int num = 2520;
    // while is false
    while(!check(num))
        ++num;
    std::cout << num;
    return 0;
}
