#include "algostuff.hpp"
using namespace std;

int main(){
	vector<int> coll1;
	list<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 9);
	PRINT_ELEMNTS(coll1, "coll1:	");

	//square each element
	transform(coll1.cbegin(), coll1.cend(), coll1.cbegin(), coll1.begin(), multiplies<int>());
	PRINT_ELEMNTS(coll1, "squared:	");

	//add each element traversed forward with each element traversed backward
	//add insert result into coll2
	transform(coll1.cbegin(), coll1.cend(), coll1.crbegin(), back_inserter(coll2), plus<int>());
	PRINT_ELEMNTS(coll2, "coll2:	");

	//print difference of two corresponding elements
	cout << "diff:	";
	transform(coll1.cbegin(), coll1.cend(), coll2.cbegin(), ostream_iterator<int>(cout, " "), minus<int>());
	cout << endl;
	return 0;
}
