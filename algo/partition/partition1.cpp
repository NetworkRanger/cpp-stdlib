#include "algostuff.hpp"
using namespace std;

int main(){
	vector<int> coll1;
	vector<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 9);
	INSERT_ELEMENTS(coll2, 1, 9);
	PRINT_ELEMNTS(coll1, "coll1:	");
	PRINT_ELEMNTS(coll2, "coll2:	");
	cout << endl;

	//move all even elements to the front
	vector<int>::iterator pos1, pos2;
	pos1 = partition(coll1.begin(), coll1.end(),
					[](int elem){
						return elem%2 == 0;
					});
	pos2 = partition(coll2.begin(), coll2.end(),
					[](int elem){
						return elem%2 == 0;
					});
	
	//print collections and first odd element
	PRINT_ELEMNTS(coll1, "coll1:	");
	cout << "first odd element:	" << *pos1 << endl;
	PRINT_ELEMNTS(coll2, "coll2:	");
	cout << "first odd element:	" << *pos2 << endl;
	return 0;
}
