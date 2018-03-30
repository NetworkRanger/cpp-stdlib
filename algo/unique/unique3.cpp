#include "algostuff.hpp"
using namespace std;

int main(){
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMNTS(coll, "coll: ");
	
	//reverse order of elements
	reverse(coll.begin(), coll.end());
	PRINT_ELEMNTS(coll, "coll:	");

	//reverse order from second to last element but one
	reverse(coll.begin()+1, coll.end()-1);
	PRINT_ELEMNTS(coll, "coll:	");

	//print all of them in reverse order
	reverse_copy(coll.cbegin(), coll.cend(), 
				ostream_iterator<int>(cout, " "));
	cout << endl;
	return 0;
}
