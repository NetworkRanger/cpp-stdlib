#include <algorithm>
#include <list>
#include <vector> 
#include <deque>
using namespace std;

int main(){
	list<int> coll1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	vector<int> coll2;

	//resize destination to have enough room for the overwriting algorithm
	coll2.resize(coll1.size());

	//copy elements from first into second collection 
	//-overwrites existing elements in destnation
	copy(coll1.cbegin(), coll1.cend(), coll2.begin());

	//create third collection with enough room
	//-initial size is passed as parameter
	deque<int> coll3(coll1.size());

	//copy elements from first into thrid collection
	copy(coll1.cbegin(), coll1.cend(), coll3.begin());
	return 0;
}
