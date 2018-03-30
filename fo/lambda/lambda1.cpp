#include <iostream>

int main(){
	auto plus10 = [](int i){
		return i+10;
	};
	std::cout << "+10:	" << plus10(7) << std::endl;

	auto plus10times2 = [](int i){
		return (i+10)*2;
	};
	std::cout << "+10 *2: " << plus10times2(7) << std::endl;

	auto pow3 = [](int i){
		return i*i*i;
	};
	std::cout << "x*x*x:	" << pow3(7) << std::endl;

	auto inverseDivide = [](double d1, double d2){
		return d2/d1;
	};
	std::cout << "invidv: " << inverseDivide(49, 7) << std::endl;
	return 0;
}
