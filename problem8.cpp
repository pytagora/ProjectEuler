//
// https://projcteuler.net/problem=8
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <numeric> // accumulate

// comparing two numbers (vector is a number)
bool IsBigger(std::vector<int>&tmp, std::vector<int>&current){
    unsigned int tmp_size = tmp.size();
    unsigned int cur_size = current.size();
    if (tmp_size > cur_size)
        return true;
    else if (tmp_size == cur_size){
        for (int it = tmp_size - 1; it >= 0; --it){
            if (current[it] > tmp[it])
                return false;
            else if (current[it] < tmp[it])
                return true;
        }
        return true;
    }
    else
        return false;
}

int main()
{
	// reading a file 
    std::ifstream inFile;
    std::string input;
    inFile.open("1000digits.txt");

    if(!inFile){
        std::cout << "Error to open file." << std::endl;
    }

	// saving 1000 digits into a vector
    std::vector<int> v;
    int k;
    while (inFile >> input){
        k = input.size();
        for (int i = 0; i < k; ++i)
            v.push_back(input[i] - '0');
    }

    inFile.close();

	// evaluating 13 adjacenting numbers = block 
    int range = 13;
    std::vector<int>::iterator limit = v.end()-range;
	// final result
    std::vector <int> maximum;
	// tmp result
    std::vector <int> product{1};
    unsigned runner;
    unsigned s;
    unsigned tmp;
    unsigned r;
    int result;
    std::vector<int> help{};
    std::vector<int>::iterator lim;
	// iterator i is at the beginning of the block
    for (std::vector<int>::iterator i = v.begin(); i != limit; ++i){
		// lim is at the end of the block
        lim = i + range;
		// j iterates through block
        for (std::vector<int>::iterator j = i; j < lim; ++j){
            s = product.size();
            tmp = *j;
            r = 0;
            runner = 0;
			// multiply number and save it backwards in the vector
			// 3 * 4 = 12 is saved as vector = {2,1}
            while (runner < s){
                result = *j * product.at(runner) + r;
                r = result / 10;
                tmp = result % 10;
                help.push_back(tmp);
                std::cout << tmp << std::endl;
                ++runner;
            }
            product = help;
            help.clear();
            if (r != 0){
                product.push_back(r);
            }
        }
        // overflow - too big number for variable type
		// works for smaller numbers
        // product = std::accumulate(i, lim, 1, std::multiplies<unsigned long int>());
        if (IsBigger(product,maximum)){
            maximum = product;
        }
        product.clear();
        product.push_back(1);
    }
	// output result
    for (int it = maximum.size() - 1; it >= 0; --it)
        std::cout << maximum[it];
    return 0;
}
