#include <string>
#include <regex>
#include <iostream>
#include <iterator>
using namespace std;

int main(){
	string data = "<person>\n"
				  " <first>Nico</first>\n"
				  " <last>Josuttis</last>\n"
				  "</person>";

	regex reg("<(.*)>(.*)<(\\1)>");

	//print data with replacement for matched patterns
	cout << regex_replace(data, reg, "<$1 value=\"$2\"/>") << endl;
	return 0;
}
	
