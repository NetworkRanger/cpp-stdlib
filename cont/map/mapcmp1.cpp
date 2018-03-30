#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

//function object to compare strings
//-allows you to set the comparison criterion at runtime
//-allows you to complte case insensitive
class RuntimeStringCmp{
public:
	//contants for the comparison criterion
	enum cmp_mode{normal, nocase};
private:
	//actual comparison mode
	const cmp_mode mode;

	//auxiliary function to compare case insensitive
	static bool nocase_compare(char c1, char c2){
		return toupper(c1) < toupper(c2);
	}
public:
	//constructor:initialize the comparison criterion
	RuntimeStringCmp(cmp_mode m=normal) : mode(m){
	}
	
	//the comparison
	bool operator()(const string& s1, const string& s2)const{
		if(mode == normal){
			return s1 < s2;
		}else{
			return lexicographical_compare(s1.begin(), s1.end(), s2.begin(), s2.end(), nocase_compare);	
		}
	}
};

//container type:
//-map with
//	-string keys
//	-string values
//	-the specail comparison object type
typedef map<string, string, RuntimeStringCmp> StringStringMap;

//function that fills and prints such containers
void fillAndPrint(StringStringMap& coll);

int main(){
	//create a container with the default comparison criterion
	StringStringMap coll1;
	fillAndPrint(coll1);

	//create an object for case-insensitive comparisons
	RuntimeStringCmp ignorecase(RuntimeStringCmp::nocase);

	//create a container with the case-insensitive comparisons criterion
	StringStringMap coll2(ignorecase);
	fillAndPrint(coll2);
	return 0;
}

void fillAndPrint(StringStringMap& coll){
	//insert elements in random order
	coll["Deutschland"] = "Germany";
	coll["deutsch"] = "German";
	coll["Haken"] = "snag";
	coll["arbeiten"] = "work";
	coll["Hund"] = "dog";
	coll["gehen"] = "go";
	coll["Unternehmen"] = "enterprise";
	coll["unternehmen"] = "undertake";
	coll["gehen"] = "walk";
	coll["Bestatter"] = "undertaker";

	//print elements
	cout.setf(ios::left, ios::adjustfield);
	for(const auto& elem : coll){
		cout << setw(15) << elem.first << " "
			 << elem.second << endl;
	}
	cout << endl;
}
