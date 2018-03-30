#include <algorithm>
#include <deque>
#include <string>
#include <iostream>
using namespace std;

class Person{
public:
	string firstname()const;
	string lastname()const;

};

//binary function predicate:
//-returns whether a person is less than another person
bool personSortCriterion(const Person& p1, const Person& p2){
	//a person is less than another person
	//-if the last name is less
	//-if the last name is equal and the first name is less
	return p1.lastname() < p2.lastname() ||
			(p1.lastname() == p2.lastname() &&
			p1.firstname() < p2.firstname());
}

int main(){
	deque<Person> coll;	

	sort(coll.begin(), coll.end(), personSortCriterion);

	return 0;
}





























