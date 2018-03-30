#include <iostream>
#include <fstream>
using namespace std;

int main(){
	//open file "example.dat" for reading and writing
	filebuf buffer;
	ostream output(&buffer);
	istream input(&buffer);
	buffer.open("example.dat", ios::in|ios::out|ios::trunc);

	for(int i=1;i<=4;++i){
		//write one lein
		output << i << ". line" << endl;

		//print all file contents
		input.seekg(0);		//seek to the beginning
		char c;
		while(input.get(c)){
			cout.put(c);
		}
		cout << endl;
		input.clear();		//clear eofbit and failbit
	}
	return 0;
}
