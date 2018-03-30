#include "algostuff.hpp"
using namespace std;

int main(){
	deque<int> coll;

	INSERT_ELEMENTS(coll, 1, 6);
	PRINT_ELEMNTS(coll);

	//print all difference between elements
	adjacent_difference(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;

	//print all products betwee elements
	adjacent_difference(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "), multiplies<int>());
	cout << endl;
	return 0;
}
	
