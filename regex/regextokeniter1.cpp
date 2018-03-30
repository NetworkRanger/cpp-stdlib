#include <string>
#include <regex>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	string data = "<person>\n"
				  "<first>Nico</first>\n"
				  "<last>Josuttis</last>\n"
				  "</person>\n";

	regex reg("<(.*)>(.*)</(\\1)>");

	//iterate over all matches (using a regex_token_iterator):
	sregex_token_iterator pos(data.cbegin(), data.cend(), reg, {0, 2});
	sregex_token_iterator end;
	for(;pos!=end;++pos){
		cout << "match:		" << pos->str() << endl;
	}
	cout << endl;

	string names = "nico, jim, helmut, paul, tim, johnpaul, rita";
	regex sep("[ \t\n]*[,;.][\t\n]*");		//separated by , ; or . and spaces
	sregex_token_iterator p(names.cbegin(), names.cend(), sep, -1);
	sregex_token_iterator e;
	for(;p!=e;++p){
		cout << "name:	" << *p << endl;
	}
	return 0;
}
