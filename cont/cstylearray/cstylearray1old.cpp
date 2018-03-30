#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>
using namespace std;

int main(){
	int coll[] = {5, 6, 2, 4, 1, 3};

	//square all elements
	transform(coll, coll+6, coll, coll, multiplies<int>());

	//sort beginning wiht the second element
	sort(coll+1, coll+6);

	//print all elements
	copy(coll, coll+6, ostream_iterator<int>(cout, " "));
	cout << endl;
	return 0;
}
