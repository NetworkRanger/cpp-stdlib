#include "algostuff.hpp"
using namespace std;
using namespace std::placeholders;

int main(){
	vector<int> coll;
	vector<int>::iterator pos;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMNTS(coll, "coll:	");

	//find first element greater than 3
	pos = find_if(coll.begin(), coll.end(), bind(greater<int>(), _1, 3));

	//print its postion 
	cout << "the "
		 << distance(coll.begin(), pos)+1
		 << ". element is the first greater than 3" << endl;
	
	//find first element divisible by 3
	pos = find_if(coll.begin(), coll.end(),
				[](int elem){
					return elem%3 == 0;
				});
	
	//print its postion
	cout << "the "
		 << distance(coll.begin(), pos)+1
		 << ". element is the first divisible by 3" << endl;
	
	//find first elemnet not < 5
	pos = find_if_not(coll.begin(), coll.end(), bind(less<int>(), _1, 5));
	cout << "first value >=5: " << *pos << endl;
	return 0;
}
