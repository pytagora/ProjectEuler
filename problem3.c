//
// https://projecteuler.net/problem=3
//

#include <stdio.h>

int main()
{
    unsigned long long int num = 600851475143;
    unsigned long long int it = 2;
    
    while (num != 1){
        // check for a factor
        if (num % it == 0)
            // divide number with a factor
            num /= it;
        ++it;
    }
    // printing biggest prime factor
    printf("%d", --it);
    return 0;
}
