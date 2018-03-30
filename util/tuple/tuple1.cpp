#include <tuple>
#include <iostream>
#include <complex>
#include <string>
using namespace std;

int main(){
	//create a four-element tuple
	//- elements are initialized with default value (0 for fundamental types)
	tuple<string, int, int, complex<double>> t;

	//create and initialized a tuple excplicityl
	tuple<int, float, string> t1(41, 6.3, "nico");

	//"iterate" over elements:
	cout << get<0>(t1) << " ";
	cout << get<1>(t1) << " ";
	cout << get<2>(t1) << " ";
	cout << endl;

	//create tuple with make_tuple()
	//- auto declares t2 with type of right-hand side
	//- thus, type of t2 is tuple
	auto t2 = make_tuple(22, 44, "nico");

	//assign second value in t2 to t1
	get<1>(t1) = get<1>(t2);

	//comparison and assignment
	//- including type conversion from tuple<int, int, const char*>
	// to tuple<int, float, string>
	if(t1<t2){
		t1 = t2;
	}
	return 0;
}
