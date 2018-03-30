#include <iostream>
using namespace std;

template <typename T>
void printElements(const T& collection){
	for(const auto& element : collection){
		std::cout << element << std::endl;
	}
}

int main(){
	int arr[] = {1, 2, 3, 4, 5};
	printElements(arr);	
	return 0;
}
