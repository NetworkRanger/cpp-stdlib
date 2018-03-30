#include "algostuff.hpp"
using namespace std;

int main(){
	deque<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	INSERT_ELEMENTS(coll, 1, 9);

	PRINT_ELEMNTS(coll, "on entry:	");

	//sort elements
	sort(coll.begin(), coll.end());

	PRINT_ELEMNTS(coll, "sorted:	");

	//sorted reverse
	sort(coll.begin(), coll.end(), greater<int>());
	PRINT_ELEMNTS(coll, "sorted >: ");
	return 0;
}
