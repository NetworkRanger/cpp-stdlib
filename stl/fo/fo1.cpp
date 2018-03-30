#include <deque>
#include <algorithm>
#include <functional>
#include <iostream>
#include "print.hpp"
using namespace std;

int main(){
	deque<int> coll = {1, 2, 3,  4, 5, 7, 11, 13, 17, 19};

	PRINT_ELEMENTS(coll, "initialized: ");

	//negate all value in coll
	transform(coll.cbegin(), coll.cend(), coll.begin(), negate<int>());
	PRINT_ELEMENTS(coll, "negated:		");

	//square all values in coll
	transform(coll.cbegin(), coll.cend(), coll.cbegin(), coll.begin(), multiplies<int>());
	PRINT_ELEMENTS(coll, "squared:		");

	return 0;
}
