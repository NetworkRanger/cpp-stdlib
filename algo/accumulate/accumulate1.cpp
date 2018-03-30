#include "algostuff.hpp"
using namespace std;

int main(){
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMNTS(coll);

	//process sum of elements
	cout << "sum:	"
		 << accumulate(coll.cbegin(), coll.cend(), 0)
		 << endl;

	//process sum of elements less 100
	cout << "product:	"
		 << accumulate(coll.cbegin(), coll.cend(), 1, multiplies<int>())
		 << endl;

	//process product of elements (use 0 as initial value)
	cout << "product:	"
		 << accumulate(coll.cbegin(), coll.cend(), 0, multiplies<int>())
		 << endl;
	return 0;
}
