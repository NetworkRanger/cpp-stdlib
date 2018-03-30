#include "algostuff.hpp"
using namespace std;

int main(){
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMNTS(coll, "coll:		");

	//rotate one element to the left
	rotate(coll.begin(), coll.begin()+1, coll.end());
	PRINT_ELEMNTS(coll, "one left:	");

	//rotate two elements to the right
	rotate(coll.begin(), coll.end()-2, coll.end());
	PRINT_ELEMNTS(coll, "two right: ");

	//rotate so that element with value 4 is the beginning
	rotate(coll.begin(), find(coll.begin(), coll.end(), 4), coll.end());
	PRINT_ELEMNTS(coll, "4 first:	");
	return 0;
}
