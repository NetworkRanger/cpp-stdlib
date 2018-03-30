#include "algostuff.hpp"
using namespace std;

int main(){
	array<int, 10> coll;

	iota(coll.begin(), coll.end(), 42);

	PRINT_ELEMNTS(coll, "coll:	");
	return 0;
}
