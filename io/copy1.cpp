#include <iostream>

int main(){
	//copy standard input to standard ouput
	std::cout << std::cin.rdbuf();
	return 0;
}
