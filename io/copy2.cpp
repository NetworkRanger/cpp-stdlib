#include <iostream>

int main(){
	//copy all standard input to standard output
	std::cin >> std::noskipws >> std::cout.rdbuf();
	return 0;
}
