#include <unordered_set>
#include <iostream>

int main(){
	//unordered multiset container for int values
	std::unordered_multiset<int> coll;

	//insert some elements
	coll.insert({1, 3, 5, 7, 11, 13, 17, 19, 23, 27, 1});

	//print all elements
	for(auto elem : coll){
		std::cout << elem << ' ';
	}
	std::cout << std::endl;

	//insert oen more element
	coll.insert(25);

	//print all elements again
	for(auto elem : coll){
		std::cout << elem << ' ';
	}
	std::cout << std::endl;
	return 0;
}
