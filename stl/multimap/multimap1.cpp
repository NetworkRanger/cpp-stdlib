#include <map>
#include <string>
#include <iostream>
using namespace std;

int main(){
	multimap<int, string> coll;		//container for int/string valuess

	//insert some elements in arbitrary order
	//-a value with key 1 gets inserted twice
	coll = {
		{5, "tagged"},
		{2, "a"},
		{1, "this"},
		{4, "of"},
		{6, "strings"},
		{1, "is"},
		{3, "multimap"}
	};

	//print all elements values
	//-element member second is the value
	for(auto elem : coll){
		cout << elem.second << ' ';
	}
	cout << endl;
	return 0;
}
