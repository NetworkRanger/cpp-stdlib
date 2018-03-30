#include <iostream>
#include <utility>
#include <tuple>
using namespace std;

class Foo{
public:
	Foo(tuple<int, float>){
		cout << "Foo::Foo(tuple)" << endl;
	}
	template <typename... Args>
	Foo(Args... args){
		cout << "Foo::Foo(args...)" << endl;
	}
};

int main(){
	//create tuple t:
	tuple<int, float> t(1, 2.22);

	//pass the tuple as a whole to the constructor of Foo:
	pair<int, Foo> p1(42, t);

	//pass the elements of the tuple to the contstuctor of Foo:
	pair<int, Foo> p2(piecewise_construct, make_tuple(42), t);
	return 0;
}






