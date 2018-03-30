#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

//function that prints the passed argument
void print(int elem){
	cout << elem << ' ';
}
int main(){
	vector<int> coll;

	//insert elemetns from 1 to 9
	for(int i=1;i<=9;++i){
		coll.push_back(i);
	}

	//print all elements
	for_each(coll.cbegin(), coll.cend(), print);
	cout << endl;
	return 0;
}
