#include "printtuple.cpp"
#include <tuple>
#include <iostream>
#include <string>
using namespace std;

int main(){
	tuple<int, float, string> t(77, 1.1, "more light");
	cout << "io: " << t << endl;
	return 0;
}
