#include "algostuff.hpp"
using namespace std;

int main(){
	vector<int> coll;
	vector<int>::iterator pos;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMNTS(coll, "coll: ");

	//define an object for the predicate (using a lambda)
	auto isEven = [](int elem){
		return elem%2 == 0;
	};

	//print whether all, any, or none of the elemnets are/is even
	cout << boolalpha << "all even?:	"
		 << all_of(coll.cbegin(), coll.cend(), isEven) << endl;
	cout << "any even?: "
		 << any_of(coll.cbegin(), coll.cend(), isEven) << endl;
	cout << "none enve?: "
		 << none_of(coll.cbegin(), coll.cend(), isEven) << endl;
	return 0;
}
