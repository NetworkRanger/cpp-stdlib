#include <iostream>
#include <list>
#include <algorithm>
#include "print.hpp"
using namespace std;

int main(){
	list<int> coll = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	PRINT_ELEMENTS(coll, "coll:		");

	//remove third element
	list<int>::iterator pos;
	int count = 0;		//call counter
	pos = remove_if(coll.begin(), coll.end(), 
					[count](int)mutable{
		return ++count == 3;
	});
	coll.erase(pos, coll.end());

	PRINT_ELEMENTS(coll, "3rd removed:	");
	return 0;
}
