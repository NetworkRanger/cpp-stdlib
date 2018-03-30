#include <forward_list>
#include <iostream>
using namespace std;

int main(){
	//create forward-list container for some prime numbers
	forward_list<long> coll = {2, 3, 5, 7, 11, 13, 17};

	//resize two times
	//-noto:poor performance
	coll.resize(9);
	coll.resize(10, 99);

	//print all elements:
	for(auto elem : coll){
		cout << elem << ' ';
	}
	cout << endl;
	return 0;
}
