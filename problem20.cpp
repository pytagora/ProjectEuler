//
// https://projecteuler.net/problem=20
//

#include <iostream>
#include <vector>
#include <numeric>

std::vector<int> Factorial(int f){
    int num = 2;
    std::vector <int> v;
    v.push_back(1);

    int s = v.size();
    int it;
    int carrier;
    int result;
    while(num <= f){
        it = 0;
        carrier = 0;
        while(it < s){
            result = v[it] * num + carrier;
            carrier = result / 10;
            v[it] = result % 10;
            ++it;
        }
        while (carrier){
            result = carrier % 10;
            v.push_back(result);
            carrier /= 10;
        }
        s = v.size();
        ++num;
    }
    return v;
}

int main(){

    std::vector<int> t;
    t = Factorial(100);
    int s = t.size();
    int sum = std::accumulate(t.begin(), t.end(), 0);
    std::cout << sum;
    return 0;
}
