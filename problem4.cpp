//
// https://projecteuler.net/problem=4
//

#include <iostream>
#include <vector>

// function for checking is the argument palindrome
bool IsPalindrome(unsigned long int num, std::vector<int> v)
{
    // pushing each integer into vector
    while (num > 0){
        v.push_back(num % 10);
        num /= 10;
    }
    int s = v.size();
    // iterating the number
    for (int j = 0; j < s; ++j){
        // checking the palindrome condition
        if (v[j] != v[s - 1 - j])
            return false;
    }
    return true;
}

int main()
{
    std::vector <int> v;
    int limit = 1000;
    // result
    int maximum = 1;
    int tmp;
    for (int i = 3; i < limit; ++i){
        for (int j = 3; j < limit; ++j){
            tmp = i * j;
            if (IsPalindrome(tmp, v)){
                if (tmp > maximum)
                    maximum = tmp;
            }
        }
    }
    std::cout << maximum;
    return 0;
}
