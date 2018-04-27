//
// https://projecteuler.net/problem=6
//

#include <iostream>

int main(){
    
    int limit = 100;
    int  sum_of_squares = 0;
    // math formula for sum of n first integers
    int square_of_sum = limit*(limit + 1) / 2;
    square_of_sum *= square_of_sum;
    for (int i = 1; i <= limit; ++i){
        sum_of_squares += i*i;
    }
    int dif = square_of_sum - sum_of_squares;
    std::cout << dif;
    return 0;   
}
