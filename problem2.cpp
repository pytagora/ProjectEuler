//
// https://projecteuler.net/problem=2
//

#include <iostream>
#include <vector>

int main(){
	unsigned long int sum = 2;
	unsigned long int tmp;
	unsigned long int maximum = 4000000;
	// init of vector and pushing first two fib numbers
	std::vector <unsigned long int> v;
	v.push_back(1);
	v.push_back(2);
	// declaration of vector iterator
	unsigned long int i = 0;
	do{
		tmp = v[i] + v[i + 1];
		// adding new fib number
		v.push_back(tmp);
		// checking if it is even
		if (tmp % 2 == 0)
			sum += tmp;
		// incrementating iterator
		++i;
	} while(tmp < maximum);
	std::cout << sum << std::endl;
	return 0;
}
