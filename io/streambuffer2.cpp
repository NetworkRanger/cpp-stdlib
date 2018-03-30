#include <iostream>
#include <fstream>

void hexMultiplicationTable(std::streambuf *buffer, int num){
	std::ostream hexout(buffer);
	hexout << std::hex << std::showbase;

	for(int i=1;i<=num;++i){
		for(int j=1;j<=num;++j){
			hexout << i*j << ' ';
		}
		hexout << std::endl;
	}
}		//does NOT close buffer

int main(){
	using namespace std;
	int num = 5;

	cout << "We print " << num << " lines hexadecimal" << endl;

	hexMultiplicationTable(cout.rdbuf(), num);

	cout << "That was the output of " << num << " hexadecmal lines " << endl;
	return 0;	
}
