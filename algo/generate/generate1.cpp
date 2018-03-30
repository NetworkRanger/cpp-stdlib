#include <cstdlib>
#include "algostuff.hpp"
using namespace std;

int main(){
	list<int> coll;

	//insert five random numbers
	generate_n(back_inserter(coll), 5, rand);
	PRINT_ELEMNTS(coll);

	//overwrite with five new random numbers
	generate(coll.begin(), coll.end(), rand);
	PRINT_ELEMNTS(coll);
	return 0;
}
