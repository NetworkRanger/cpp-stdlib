#include <map>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
	//map with floats as key and value
	//-initializing keys and values are automaticially converted to flot
	map<float, float> coll = {
		{1, 7},{2, 4},{3, 2},{4,3},
		{5, 6},{6, 1},{7, 3}
	};

	//search an element with key 3.0 (logarithmic complexity)
	auto posKey = coll.find(3.0);
	if(posKey != coll.end()){
		cout << "key 3.0 found ("
			 << posKey->first << ":"
			 << posKey->second << ")" << endl;
	}

	//search an element with value 3.0 (linear complexity)
	auto posVal = find_if(coll.begin(), coll.end(),
						[](const pair<float, float>& elem){
							return elem.second == 3.0;
						});
	if(posVal != coll.end()){
		cout << "value 3.0 found ("
			 << posVal->first << ":"
			 << posVal->second << ")" << endl;
	}
	return 0;
}
