#include "algostuff.hpp"
using namespace std;

int main(){
	vector<int> coll1;
	deque<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 9);
	INSERT_ELEMENTS(coll2, 11, 23);
	PRINT_ELEMNTS(coll1, "coll1:	");
	PRINT_ELEMNTS(coll2, "coll2:	");

	//swap elements of coll1 with corresponding elements of coll2
	deque<int>::iterator pos;
	pos = swap_ranges(coll1.begin(), coll1.end(), coll2.begin());

	PRINT_ELEMNTS(coll1, "\ncoll1:	");
	PRINT_ELEMNTS(coll2, "coll2:	");
	if(pos != coll2.end()){
		cout << "first element not modified:	"
			 << *pos << endl;
	}

	//mirror first three with last three elements in coll2
	swap_ranges(coll2.begin(), coll2.begin()+3, coll2.rbegin());
	PRINT_ELEMNTS(coll2, "\ncoll2:	");
	return 0;
}
