#include "algostuff.hpp"
using namespace std;

//return whether the second object has double the value of the first
bool doubled(int elem1, int elem2){
	return elem1*2 == elem2;
}

int main(){
	vector<int> coll;

	coll.push_back(1);
	coll.push_back(3);
	coll.push_back(2);
	coll.push_back(4);
	coll.push_back(5);
	coll.push_back(5);
	coll.push_back(0);

	PRINT_ELEMNTS(coll, "coll:	");

	//search first two elements with equal value
	vector<int>::iterator pos;
	pos = adjacent_find(coll.begin(), coll.end());

	if(pos != coll.end()){
		cout << "first two elements with equal value have position "
			 << distance(coll.begin(), pos)+1
			 << endl;
	}

	//search first two elemnets for which the second has double the value of the first
	pos = adjacent_find(coll.begin(), coll.end(), doubled);

	if(pos != coll.end()){
		cout << "first two elements with second value twice the"
			 << "first hav pos. "
			 << distance(coll.begin(), pos)+1
			 << endl;
	}

	return 0;
}




























