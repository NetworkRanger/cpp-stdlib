#include "algostuff.hpp"
using namespace std;

int main(){
	list<int> coll;

	//insert two sorted sequences
	INSERT_ELEMENTS(coll, 1, 7);
	INSERT_ELEMENTS(coll, 1, 8);
	PRINT_ELEMNTS(coll);

	//find beginning of second part (element after 7)
	list<int>::iterator pos;
	pos = find(coll.begin(), coll.end(), 7);
	++pos;

	//merge into one sorted range
	inplace_merge(coll.begin(), pos, coll.end());

	PRINT_ELEMNTS(coll);
	return 0;
}
