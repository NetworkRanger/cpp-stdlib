#include <set>
#include <algorithm>
#include <iterator>
#include <iostream>
using namespace std;

int main(){
	//unordered set with elements form 1 to 9
	set<int> coll = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	//print all elements of the collection
	copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;

	//Remove all elements with value 3
	//-algorithm remove() does not work
	//-instead member function erase() works
	int num = coll.erase(3);

	//print number of removed elements
	cout << "number of removed elements: " << num << endl;

	//print all elements of the modified collection
	copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;
	return 0;
}
