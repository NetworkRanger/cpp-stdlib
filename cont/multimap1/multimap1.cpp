#include <map>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	//create multimap as string/stringh dictionary
	multimap<string, string> dict;

	//insert some elements in random order
	dict.insert({
		{"day", "Tag"}, {"strange", "fremd"},
		{"car", "Auto"}, {"smart", "elegant"},
		{"trait", "Merkmal"}, {"strange", "seltsam"},
		{"smart", "raffiniert"}, {"smart", "klug"},
		{"clever", "raffiniert"}
	});

	//print all elements
	cout.setf(ios::left, ios::adjustfield);
	cout << ' ' << setw(10) << "english "
		 << "german	" << endl;
	cout << setfill('-') << setw(20) << ""
		 << setfill(' ') << endl;
	for(const auto& elem : dict){
		cout << ' ' << setw(10) << elem.first
			 << elem.second << endl;
	}
	return 0;
}
