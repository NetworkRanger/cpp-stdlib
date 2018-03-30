#include "algostuff.hpp"
using namespace std;

int main(){	
	deque<int> coll;
	list<int> subcoll;

	INSERT_ELEMENTS(coll, 1, 7);
	INSERT_ELEMENTS(coll, 1, 7);
	INSERT_ELEMENTS(subcoll, 3, 6);

	PRINT_ELEMNTS(coll, "coll:		");
	PRINT_ELEMNTS(subcoll, "subcoll: ");

	//search first occurrence of subcoll in coll
	deque<int>::iterator pos;
	pos = search(coll.begin(), coll.end(), subcoll.begin(), subcoll.end());

	//loop while subcoll found as subrange of coll
	while(pos != coll.end()){
		//print position of first elemnet
		cout << "subcoll found starting with element "
			 << distance(coll.begin(), pos)+1
			 << endl;

		//search next occurrence of subcoll
		++pos;
		pos = search(pos, coll.end(), subcoll.begin(), subcoll.end());
	}
	return 0;
}
