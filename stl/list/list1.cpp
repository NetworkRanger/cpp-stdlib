#include <list>
#include <iostream>
using namespace std;

int main(){
	list <char> coll;	//list contanier for character elements

	//append elements from 'a' to 'z'
	for(char c='a';c<='z';++c){
		coll.push_back(c);
	}
	
	//print all elements:
	//- use range-based for loop
	for(auto elem : coll){
		cout << elem << ' ';
	}
	cout << endl;
	return 0;
}
