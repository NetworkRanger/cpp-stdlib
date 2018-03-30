#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include "print.hpp"
using namespace std;

class IntSequence{
private:
	int value;
public:
	IntSequence(int initialValue) : value(initialValue){}	//constructor

	int operator()(){			// "function call"
		return ++value;
	}
};

int main(){
	list<int> coll;

	//insert values from 1 to 9
	generate_n(back_inserter(coll), 9, IntSequence(1));

	PRINT_ELEMENTS(coll);

	//replace second to last element but one with values starting at 42
	generate(next(coll.begin()), prev(coll.end()), IntSequence(42));

	PRINT_ELEMENTS(coll);
	return 0;
}
