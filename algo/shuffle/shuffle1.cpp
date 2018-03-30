#include <cstdlib>
#include "algostuff.hpp"
using namespace std;

int main(){
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMNTS(coll, "coll:		");

	//suffle all elements randmoly
	random_shuffle(coll.begin(), coll.end());

	PRINT_ELEMNTS(coll, "suffled:	");

	//sort them again
	sort(coll.begin(), coll.end());
	PRINT_ELEMNTS(coll, "sorted:	");

	//suffle elements with default engine
	default_random_engine dre;
	shuffle(coll.begin(), coll.end(), dre);

	PRINT_ELEMNTS(coll, "shuffled:	");
	return 0;
}
