#include <forward_list>
#include "print.hpp"
using namespace std;

int main(){
	forward_list<int> list = {1, 2, 3, 4, 5, 97, 98, 99};

	//find the position before the first even element
	auto posBefore = list.before_begin();
	for(auto pos=list.begin();pos!=list.end();++pos, ++posBefore){
		if(*pos%2 == 0){
			break;	//element found;
		}
	}

	//and insert a new element in front of the first even element 
	list.insert_after(posBefore, 42);
	PRINT_ELEMENTS(list);
	return 0;
}
