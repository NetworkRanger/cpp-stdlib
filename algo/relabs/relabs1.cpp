#include "algostuff.hpp"
using namespace std;

int main(){
	vector<int> coll = {17, -3, 22, 13, -9};
	PRINT_ELEMNTS(coll, "coll:		");

	//convert into relative values
	adjacent_difference(coll.cbegin(), coll.cend(), coll.begin());
	PRINT_ELEMNTS(coll, "relative:	");

	//convert into absolute values
	partial_sum(coll.cbegin(), coll.cend(), coll.begin());
	PRINT_ELEMNTS(coll, "absolute:	");
	return 0;
}
