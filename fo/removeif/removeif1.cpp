#include <iostream>
#include <list>
#include <algorithm>
#include "print.hpp"
using namespace std;

class Nth{
private:
	int nth;	//call for which to return true
	int count;	//call counter
public:
	Nth(int n) : nth(n), count(0){}
	bool operator()(int){
		return ++count == nth;
	}
};
int main(){
	list<int> coll = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	PRINT_ELEMENTS(coll, "coll:			");

	//remvoe third element
	list<int>::iterator pos;
	pos = remove_if(coll.begin(), coll.end(), Nth(3));
	coll.erase(pos, coll.end());

	PRINT_ELEMENTS(coll, "3rd removed:		");
	return 0;
}
