#include <iostream>
#include <sstream>
#include <string>
#include <tuple>
#include <utility>
using namespace std;

tuple<string, string, string> parseName(string name){
	string s1, s2, s3;
	istringstream(name) >> s1 >> s2 >> s3;
	if(s3.empty()){
		return tuple<string, string, string>(move(s1), "", move(s2));
	}else{
		return tuple<string, string, string>(move(s1), move(s2), move(s3));
	}
}

int main(){
	auto t1 = parseName("Nicolai M. Josuttis");
	cout << "firstname:	" << get<0>(t1) << endl;
	cout << "middle:	" << get<1>(t1) << endl;
	cout << "lastname:	" << get<2>(t1) << endl;
	auto t2 = parseName("Nico Josuttis");
	cout << "firstname:	" << get<0>(t2) << endl;
	cout << "middle:	" << get<1>(t2) << endl;
	cout << "lastname:	" << get<2>(t2) << endl;
	return 0;
}
