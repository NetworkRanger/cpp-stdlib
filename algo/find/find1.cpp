#include "algostuff.hpp"
using namespace std;

int main(){
	list<int> coll;
	INSERT_ELEMENTS(coll, 1, 9);
	INSERT_ELEMENTS(coll, 1, 9);

	PRINT_ELEMNTS(coll, "coll:	");

	//find first element with value 4
	list<int>::iterator pos1;
	pos1 = find(coll.begin(), coll.end(), 4);

	//find second element with value 4
	//-note:continue the serach behind the first 4 (if an)
	list<int>::iterator pos2;
	if(pos1 != coll.end()){
		pos2 = find(++pos1, coll.end(), 4);
	}

	//print all elements from first to second 4 (both included)
	//-note:now we need the position of the first 4 again (if any)
	if(pos1 != coll.end() && pos2 != coll.end()){
		copy(--pos1, ++pos2, ostream_iterator<int>(cout, " "));
		cout << endl;
	}
	return 0;
}
