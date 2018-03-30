#include <string>
#include <iostream>
#include <unordered_set>
#include "hashval.hpp"
#include "print.hpp"
using namespace std;

class Customer{
private:
	string fname;
	string lname;
	long no;
public:
	Customer(const string& fn, const string& ln, long n)
		: fname(fn), lname(ln), no(n){}
	string firstname()const{
		return fname;
	}
	string lastname()const{
		return lname;
	}
	long number()const{
		return no;
	}
	friend ostream& operator << (ostream& strm, const Customer& c){
		return strm << "[" << c.fname << "," << c.lname << ","
					<< c.no << "]";
	}
};

int main(){
	//lambda for user-defined hash function
	auto hash = [](const Customer& c){
		return hash_val(c.firstname(), c.lastname(), c.number());
	};

	//lambda for user-defined equality criterion
	auto eq = [](const Customer& c1, Customer& c2){
		return c1.number() == c2.number();
	};

	//create unordered set with user-defined behaviour
	unordered_set<Customer, decltype(hash), decltype(eq)> custset(10, hash, eq);
	custset.insert(Customer("nico", "josuttis", 42));
	PRINT_ELEMENTS(custset);
	return 0;
}



























