#include "algostuff.hpp"
using namespace std;

int main(){
	vector<int> coll;
	INSERT_ELEMENTS(coll, 3, 7);
	INSERT_ELEMENTS(coll, 5, 9);
	INSERT_ELEMENTS(coll, 1, 4);

	PRINT_ELEMNTS(coll, "on entry:			");
	
	//convert collection into a heap
	make_heap(coll.begin(), coll.end());

	PRINT_ELEMNTS(coll, "after make_heap():	");

	//pop next element out of the heap
	pop_heap(coll.begin(), coll.end());
	coll.pop_back();

	PRINT_ELEMNTS(coll, "after pop_heap():	");

	//push new element into the heap
	coll.push_back(17);
	push_heap(coll.begin(), coll.end());

	PRINT_ELEMNTS(coll, "after push_heap():	");

	//convert heap into a sorted collection
	//-Note:after the call it is no longer a heap
	sort_heap(coll.begin(), coll.end());
	PRINT_ELEMNTS(coll, "after sort_heap():	");
	return 0;
}
