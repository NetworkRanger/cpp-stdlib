#include "algostuff.hpp"
using namespace std;

int main(){
	deque<int> coll;

	INSERT_ELEMENTS(coll, 3, 7);
	INSERT_ELEMENTS(coll, 2, 6);
	INSERT_ELEMENTS(coll, 1, 5);
	PRINT_ELEMNTS(coll);

	//extract the four lowest elements
	nth_element(coll.begin(), coll.begin()+3, coll.end());

	//print them
	cout << "the four lowest elements are:	";
	copy(coll.cbegin(), coll.cbegin()+4, ostream_iterator<int>(cout, " "));
	cout << endl;

	//extract the four highest elements
	nth_element(coll.begin(), coll.end()-4, coll.end());

	//print them
	cout << "the four highest elements are:	";
	copy(coll.cend()-4, coll.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;

	//extract the four highest elements (second version)
	nth_element(coll.begin(), coll.begin()+3, coll.end(), greater<int>());

	//print them
	cout << "the four highest elements are:	";
	copy(coll.cbegin(), coll.cbegin()+4, ostream_iterator<int>(cout, " "));
	cout << endl;
	return 0;
}
