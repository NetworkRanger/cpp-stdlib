#include <functional>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
using namespace std;
using namespace std::placeholders;

class Person{
private:
	string name;
public:
	Person(const string& n) : name(n){}
	void print()const{
		cout << name << endl;
	}
	void print2(const string& prefix)const{
		cout << prefix << name << endl;
	}
};

int main(){
	vector<Person> coll = {Person("Tick"), Person("Trick"), Person("Track")};

	//call member function print() for each person
	for_each(coll.begin(), coll.end(), bind(&Person::print, _1));
	cout << endl;

	//call member function pritn2() with additional argument for each person
	bind(&Person::print2, _1, "This is:	")(Person("nico"));	
	return 0;
}



















