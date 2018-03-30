#include <set>
#include <string>
#include <iostream>
using namespace std;

int main(){
	multiset<string> cities{
		"Banushweig", "Hanover", "Frankfurt", "New York",
		"Chicago", "Toronto", "Paris", "Frankfurt"
	};

	//print each elements:
	for(const auto& elem : cities){
		cout << elem << "  ";
	}
	cout << endl;

	//insert additional values:
	cities.insert({"London", "Munich", "Hanover", "Branushweig"});

	//print each element:
	for(const auto& elem : cities){
		cout << elem << "  ";
	}
	cout << endl;
	
	return 0;
}

