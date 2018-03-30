#include <functional>
#include <iostream>

int main(){
	auto plus10 = std::bind(std::plus<int>(), std::placeholders::_1, 10);
	std::cout << "+10:	" << plus10(7) << std::endl;

	auto plus10items2 = std::bind(std::multiplies<int>(),
								std::bind(std::multiplies<int>(),
										std::placeholders::_1,
										std::placeholders::_1),
								std::placeholders::_1);
	std::cout << "+10 *2: " << plus10items2(7) << std::endl;

	auto pow3 = std::bind(std::multiplies<int>(),
						std::bind(std::multiplies<int>(),
									std::placeholders::_1,
									std::placeholders::_1),
						std::placeholders::_1);
	std::cout << "x*x*x:	" << pow3(7) << std::endl;

	auto inversDivide = std::bind(std::divides<double>(),
								std::placeholders::_2,
								std::placeholders::_1);
	std::cout << "invidv:	" << inversDivide(49, 7) << std::endl;
	return 0;
}
