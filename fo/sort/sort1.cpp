#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

class Person{
public:
	string firstname()const;
	string lastname()const;

};

//class for function predicate
//-operator() returns whether a person is less than another person
class PersonSortCriterion{
public:	
	bool operator()(const Person& p1, const Person& p2)const{
		//a person is less than another person
		//-if the last name is less
		//-if the last name is equal and the first name is less
		return p1.lastname()<p2.lastname() ||
				(p1.lastname() == p2.lastname() &&
				p1.firstname() < p2.firstname());
	}
};

int main(){
	//create a set with special sorting criterion
	set<Person, PersonSortCriterion> coll;

	//do something with the elements
	for(auto pos = coll.begin();pos != coll.end();++pos){
		
	}
	return 0;
}
