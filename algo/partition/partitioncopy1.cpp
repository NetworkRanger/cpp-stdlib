#include "algostuff.hpp"
using namespace std;

int main(){
	vector<int> coll = {1, 6, 33, 7, 22, 4, 11, 33, 2, 7, 0, 42, 5};
	PRINT_ELEMNTS(coll, "coll:	");

	//destination collections
	vector<int> evenColl;
	vector<int> oddColl;

	//copy all elements partitioned accordingly into even adn odd elemnets
	partition_copy(coll.cbegin(), coll.cend(),
					back_inserter(evenColl),
					back_inserter(oddColl),
					[](int elem){
						return elem%2 == 0;
					});
	PRINT_ELEMNTS(evenColl, "evenColl:	");
	PRINT_ELEMNTS(oddColl, "oddCOll:	");
	return 0;
}
