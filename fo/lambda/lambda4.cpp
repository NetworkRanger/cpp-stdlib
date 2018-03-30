#include <iostream>
#include <algorithm>
#include <locale>
#include <string>
using namespace std;

char myToupper(char c){
	std::locale loc;
	return std::use_facet<std::ctype<char>>(loc).toupper(c);
}
int main(){
	string s("Internationaliztaion");
	string sub("Nation");

	//search substring case insensitive
	string::iterator pos;
	pos = search(s.begin(), s.end(), sub.begin(), sub.end(),
				[](char c1, char c2){
					return myToupper(c1) == myToupper(c2);
				});
	
	if(pos != s.end()){
		cout << "\"" << sub << "\" is part of \"" << s << "\"" << endl;
	}

	return 0;
}
