#include <iterator>
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){
	//create list with elements form 1 to 9
	list<int> coll = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	//find position of element with value 5
	list<int>::const_iterator pos;
	pos = find(coll.cbegin(), coll.cend(), 5);

	//print value of the element 
	cout << "pos:	" << *pos << endl;

	//convert iterator to reverse iterator
	list<int>::const_reverse_iterator rpos(pos);
	
	//print value of the element to which the reverse iterator refers
	cout << "rpos:	" << *rpos << endl;

	//convert reverse iterator back to normal iterator
	list<int>::const_iterator rrpos;
	rrpos = rpos.base();

	//print value of the element to which the normal iterator refers
	cout << "rrpos:	" << *rrpos << endl;
	return 0;
}
