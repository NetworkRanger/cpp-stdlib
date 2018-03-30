#include <map>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	map<string, double> coll{
		{"tim", 9.9},
		{"struppi", 11.77}
	};

	//square the value of each element:
	for_each(coll.begin(), coll.end(), [](pair<const string, double>& elem){
											elem.second *= elem.second;	
										});

	//print each element:
	for_each(coll.begin(), coll.end(),
			[](const map<string, double>::value_type& elem){
				cout << elem.first << ": " << elem.second << endl;
			});
	return 0;
}
