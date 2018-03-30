#include "algostuff.hpp"
using namespace std;

int main(){
	list<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	INSERT_ELEMENTS(coll, 1, 9);
	coll.sort();
	PRINT_ELEMNTS(coll);

	//print first and last position 5 could get inserted
	pair<list<int>::const_iterator, list<int>::const_iterator> range;
	range = equal_range(coll.cbegin(), coll.cend(), 5);

	cout << "5 could get position "
		 << distance(coll.cbegin(), range.first)+1
		 << " up to "
		 << distance(coll.cbegin(), range.second)+1
		 << " without breaking the sorting" << endl;
	return 0;
}
