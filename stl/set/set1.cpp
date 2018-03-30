#include <set>
#include <iostream>

int main(){
	//type of the collection
	typedef std::set<int> IntSet;

	IntSet coll;	//set container for int values
	//insert elements from 1 to 6 in arbitrary order
	//-note that there are two calls of insert() with value 1
	coll.insert(3);
	coll.insert(1);
	coll.insert(5);
	coll.insert(4);
	coll.insert(1);
	coll.insert(6);
	coll.insert(2);

	//print all elements
	//-iterate over elements
	IntSet::const_iterator pos;
	for(pos = coll.begin();pos != coll.end();++pos){
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;
	return 0;
}
