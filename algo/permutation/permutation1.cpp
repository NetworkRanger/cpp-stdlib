#include "algostuff.hpp"
using namespace std;

int main(){
	vector<int> coll;
	INSERT_ELEMENTS(coll, 1, 3);
	PRINT_ELEMNTS(coll, "on entry:	");

	//permute elements until they are sorted
	//-runs throungh all permutations because the elements are sorted noe
	while(next_permutation(coll.begin(), coll.end())){
		PRINT_ELEMNTS(coll, " ");
	}	
	PRINT_ELEMNTS(coll, "afterward:	");

	//permute until descending sorted 
	//-this is the next permutation after ascending sorting
	//-so the loop ends immediately
	while(prev_permutation(coll.begin(), coll.end())){
		PRINT_ELEMNTS(coll, " ");
	}
	PRINT_ELEMNTS(coll, "now:		");

	//permute elements until they are sorted in descending order
	//-runs through all permutations because the elements are sorted in desceding order now
	while(prev_permutation(coll.begin(), coll.end())){
		PRINT_ELEMNTS(coll, " ");
	}
	PRINT_ELEMNTS(coll, "afterward: ");
	return 0;
}
