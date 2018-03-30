#include "algostuff.hpp"
using namespace std;

int main(){
	vector<int> coll = {5, 3, 9, 1, 3, 4, 8, 2, 6};
	PRINT_ELEMNTS(coll, "coll: ");

	//define predicate:check whether element is odd:
	auto isOdd = [](int elem){
		return elem % 2 == 1;
	};
	
	//check whether coll is partitioned in odd and even elemnets
	if(is_partitioned(coll.cbegin(), coll.cend(), isOdd)){
		cout << "coll is partitioned" << endl;

		//find first even element:
		auto pos = partition_point(coll.cbegin(), coll.cend(), isOdd);
		cout << "first even element: " << *pos << endl;
	}else{
		cout << "coll is not partitioned" << endl;
	}
	return 0;
}
