#include <algorithm>
#include <list>
#include <iostream>
using namespace std;

int main(){
	list<int> coll;

	//insert elements from 20 to 40
	for(int i=20;i<=40;++i){
		coll.push_back(i);
	}

	//find position of element with value 3
	//-there is none, so pos3 gets coll.end()
	auto pos3 = find(coll.begin(), coll.end(), 3);

	//reverse the order of elements between found element and the end
	//-because pos3 is coll.end() it reverse an empty range
	reverse(pos3, coll.end());

	//find positions of values 25 and 35
	list<int>::iterator pos25, pos35;
	pos25 = find(coll.begin(), coll.end(), 25);
	pos35 = find(coll.begin(), coll.end(), 35);

	//print the maximum of the corresponding range
	//-note:including pos25 but excluding pos35
	cout << "max: " << *max_element(pos25, pos35) << endl;

	//process the elements including the last postion
	cout << "max: " << *max_element(pos25, ++pos35) << endl;
	return 0;
}
