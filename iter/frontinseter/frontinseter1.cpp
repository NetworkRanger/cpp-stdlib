#include <list>
#include <algorithm>
#include <iterator>
#include "print.hpp"
using namespace std;

int main(){
	list<int> coll;

	//create front inserter for coll
	//-inconvenient way
	front_insert_iterator<list<int>> iter(coll);

	//insert elements with the usual iterator interface
	*iter = 1;
	++iter;
	*iter = 2;
	++iter;
	*iter = 3;

	//create front inserter and insert elements
	//-convenient way
	front_inserter(coll) = 44;
	front_inserter(coll) = 55;

	PRINT_ELEMENTS(coll);

	//use front inserter to insert ell elements again
	copy(coll.begin(), coll.end(), front_inserter(coll));

	PRINT_ELEMENTS(coll);
	
	return 0;
}
