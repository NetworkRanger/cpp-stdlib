#include "algostuff.hpp"
using namespace std;

int main(){
	list<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMNTS(coll);

	//check existence of element with value 5
	if(binary_search(coll.cbegin(), coll.cend(), 5)){
		cout << "5 is present" << endl;
	}else{
		cout << "5 is not present" << endl;
	}

	//check existence of element with value 42
	if(binary_search(coll.cbegin(), coll.cend(), 42)){
		cout << "42 is present" << endl;
	}else{
		cout << "42 is not present" << endl;
	}
	return 0;
}
