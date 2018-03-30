#include "algostuff.hpp"
using namespace std;

//checks whether an element is enven or odd
bool checkEven(int elem, bool even){
	if(even){
		return elem%2 == 0;
	}else{
		return elem%2 == 1;
	}
}

int main(){
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMNTS(coll, "coll: ");

	//arguments for checkEven()
	//-check for: "even odd even"
	bool checkEvenArgs[3] = {true, false, true};

	//search first subrange in coll
	vector<int>::iterator pos;
	pos = search(coll.begin(), coll.end(), checkEvenArgs, checkEvenArgs+3, checkEven);

	//loop while subrange found
	while(pos != coll.end()){
		//print postion of first element
		cout << "subrange found starting with element "
			 << distance(coll.begin(), pos)+1
			 << endl;

		//search next subrange in coll
		pos = search(++pos, coll.end(), checkEvenArgs, checkEvenArgs+3, checkEven);
	}
	return 0;
}



















