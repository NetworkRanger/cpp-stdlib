#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>
#include "fopow.hpp"
using namespace std;
using namespace std::placeholders;

int main(){
	vector<int> coll = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	//print 3 raised to the power of all elements
	transform(coll.begin(), coll.end(), ostream_iterator<float>(cout, " "),
				bind(fopow<float, int>(), _1, 3));
	cout << endl;
	return 0;
}
