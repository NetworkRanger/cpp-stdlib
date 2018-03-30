#include "algostuff.hpp"
using namespace std;

int main(){
	list<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	INSERT_ELEMENTS(coll, 1, 9);
	coll.sort();
	PRINT_ELEMNTS(coll);

	//print first and last position 5 could get inserted
	auto pos1 = lower_bound(coll.cbegin(), coll.cend(), 5);
	auto pos2 = upper_bound(coll.cbegin(), coll.cend(), 5);

	cout << "5 could get positio "
		 << distance(coll.cbegin(), pos1) + 1
		 << " up to "
		 << distance(coll.cbegin(), pos2) +1
		 << " without breaking the sorting" << endl;

	//insert 3 at the first possible position without breaking the sorting
	coll.insert(lower_bound(coll.begin(), coll.end(), 3), 3);

	//insert 7 at the last possible position without breaking the sorting
	coll.insert(upper_bound(coll.begin(), coll.end(), 7), 7);

	PRINT_ELEMNTS(coll);
	return 0;
}
