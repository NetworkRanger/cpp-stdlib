#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

int main(){
	//create a string vector
	//-initialized by all words from standard input
	vector<string> coll((istream_iterator<string>(cin)), istream_iterator<string>());

	//sort elements
	sort(coll.begin(), coll.end());

	//print all elements ignoring subsequent duplicates
	unique_copy(coll.cbegin(), coll.cend(), ostream_iterator<string>(cout, "\n"));
	return 0;
}
