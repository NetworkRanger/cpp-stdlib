#include "algostuff.hpp"
using namespace std;
using namespace std::placeholders;

int main(){
	list<int> coll;

	INSERT_ELEMENTS(coll, 2, 6);
	INSERT_ELEMENTS(coll, 4, 9);
	PRINT_ELEMNTS(coll);

	//print all elements with value 5 replaced with 55
	replace_copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "), 5, 55);
	cout << endl;

	//print all elements with a vlaue less than 5 replaced with 42
	replace_copy_if(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "),
					bind(less<int>(), _1, 5), 42);
	cout << endl;

	//print each element while each odd element is replaced with 0
	replace_copy_if(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "),
					[](int elem){
						return elem%2 == 1;
					}, 0);
	cout << endl;
	return 0;
}
