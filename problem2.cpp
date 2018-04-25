//
// https://projecteuler.net/problem=2
//

#include <iostream>
#include <vector>

int main(){
	unsigned long int sum = 2;
	unsigned long int tmp;
	unsigned long int maximum = 4000000;
	std::vector <unsigned long int> v;
	v.push_back(1);
	v.push_back(2);
	do{
		tmp = v[0] + v[1];
		v.push_back(tmp);
		if (tmp % 2 == 0)
			sum += tmp;
		v.erase(v.begin());
	} while(tmp < maximum);
	std::cout << sum << std::endl;
	return 0;
}
