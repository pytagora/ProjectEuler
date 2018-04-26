//
// https://projecteuler.net/problem=3ž
//

#include <stdio.h>

int main()
{
    unsigned long long int num = 600851475143;
    unsigned long long int it = 2;
    
    while (num != 1){
        if (num % it == 0)
            num /= it;
        ++it;
    }
    printf("%d", --it);
    return 0;
}
