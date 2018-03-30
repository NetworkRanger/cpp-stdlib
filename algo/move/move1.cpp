#include "algostuff.hpp"
using namespace std;

int main(){	
	vector<string> coll1 = {"Hello", "this", "is", "an", "example"};
	list<string> coll2;

	//copy elements of coll1 into coll2
	//-use back inserter to insert instead of overwrite
	//-use copy() because the elements in coll1 are used again
	copy(coll1.cbegin(), coll1.cend(), back_inserter(coll2));

	//print elemnets of coll2
	//-copy elements to cout using an ostream iterator
	//-use move() because these elements in coll2 are not used again
	move(coll2.cbegin(), coll2.cend(), ostream_iterator<string>(cout, " "));
	cout << endl;

	//copy elements of coll1 into coll2 in reverse order
	//-now overwriting (coll2.size() still fits)
	//-use move() because the elements in coll1 are not used again
	move(coll1.crbegin(), coll1.crend(), coll2.begin());

	//print elements of coll2 again
	//-use move() because the elemnts in coll2 are not used again
	move(coll2.cbegin(), coll2.cend(),
		ostream_iterator<string>(cout, " "));
	cout << endl;
	return 0;
}
