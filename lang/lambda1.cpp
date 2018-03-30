#include <functional>
#include <iostream>

std::function<int(int, int)> returnLambda(){
	return [](int x, int y){
		return x*y;	
	};
}

int main(){
	auto lf = returnLambda();
	std::cout << lf(6, 7) << std::endl;
	return 0;
}
