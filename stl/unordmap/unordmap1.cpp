#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;

int main(){
	unordered_map<string, double> coll{
		{"tim", 9.9},
		{"struppi", 11.77}
	};

	//square the value of each element:
	for(pair<const string, double>& elem : coll){
		elem.second *= elem.second;
	}

	//print each element (key and value):
	for(const auto& elem : coll){
		cout << elem.first << ": " << elem.second << endl;
	}
	return 0;
}
