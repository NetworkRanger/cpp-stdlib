#include <iterator>
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){
	list<int> coll;

	//insert elements from -3 to 9
	for(int i=-3;i<=9;++i){
		coll.push_back(i);
	}

	//serach element with value 5
	list<int>::iterator pos;
	pos = find(coll.begin(), coll.end(), 5);
	if(pos != coll.end()){
		//process and print difference from the beginning
		cout << "difference between beginning and 5: "
			 << distance(coll.begin(), pos) << endl;
	}else{
		cout << "5 not found" << endl;
	}
	return 0;
}
