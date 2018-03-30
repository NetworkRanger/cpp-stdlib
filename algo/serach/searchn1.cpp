#include "algostuff.hpp"
using namespace std;

int main(){
	deque<int> coll;

	coll = {1, 2, 7, 7, 6, 3, 9, 5, 7, 7, 7, 3, 6};
	PRINT_ELEMNTS(coll);

	//find three consecutive elements with value 7
	deque<int>::iterator pos;
	pos = search_n(coll.begin(), coll.end(), 3, 7);

	//print result
	if(pos != coll.end()){
		cout << "three consecutive elements with value 7 "
			 << "start wiht " << distance(coll.begin(), pos)+1
			 << ". element" << endl;
	}else{
		cout << "no four consecutive elements with value > 3 found";
	}
	cout << endl;
	return 0;
}
