#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;

int main(){
	//type of the container:
	//-unordered_map: elements are key/value pairs
	//-string:keys have tpye string
	//-float:values have type float
	unordered_map<string, float> coll;
	
	//insert some elements into the collection
	//-using the syntax of an associative array
	coll["VAT1"] = 0.16;
	coll["VAT2"] = 0.07;
	coll["Pi"] = 3.1415;
	coll["an arbitrary number"] = 4983.223;
	coll["Null"] = 0;

	//change value
	coll["VAT1"] += 0.03;

	//print difference of VAT values
	cout << "VAT difference: " << coll["VAT1"] - coll["VAT2"] << endl;
	return 0;
}
