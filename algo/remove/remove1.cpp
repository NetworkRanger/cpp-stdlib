#include "algostuff.hpp"
using namespace std;

int main(){
	vector<int> coll;
	INSERT_ELEMENTS(coll, 2, 6);
	INSERT_ELEMENTS(coll, 4, 9);
	INSERT_ELEMENTS(coll, 1, 7);
	PRINT_ELEMNTS(coll, "coll:			");

	//remove all elements with value 5
	vector<int>::iterator pos;
	pos = remove(coll.begin(), coll.end(), 5);

	PRINT_ELEMNTS(coll, "size not changed:	");

	//erase the "remvoed" elements in the container
	coll.erase(pos, coll.end());
	PRINT_ELEMNTS(coll, "size chagned:		");

	//remvoe all elements less than 4
	coll.erase(remove_if(coll.begin(), coll.end(),
						[](int elem){
							return elem < 4;
						}), coll.end());
	PRINT_ELEMNTS(coll, "<4 removed:		");
	return 0;
}
