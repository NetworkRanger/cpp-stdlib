#include <iterator>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	//create list with elements from 1 to 9
	vector<int> coll = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	//find position of element with value 5
	vector<int>::const_iterator pos;
	pos = find(coll.cbegin(), coll.cend(), 5);

	//print value to which iterator pos refers
	cout << "pos: " << *pos << endl;

	//convert iterator to reverse iterator rpos
	vector<int>::const_reverse_iterator rpos(pos);

	//print value to which reverse iterator rpos refers
	cout << "rpos: " << *rpos << endl;
	return 0;
}
