#include <iterator>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main(){
	vector<int> coll;

	//insert elements from 1 to 9
	for(int i=1;i<=9;++i){
		coll.push_back(i);
	}

	//print all element in reverse order
	copy(coll.crbegin(), coll.crend(),
			ostream_iterator<int>(cout, " "));
	cout << endl;
	return 0;
}
