#include <string>		//for strings
#include <iostream>		//for I/O
#include <fstream>		//for file I/O
#include <iomanip>		//for setw()
#include <cstdlib>		// foe exit()
using namespace std;

//forward declarations
void writeCharsetToFile(const string& filename);
void outputFile(const string& filename);

int main(){
	writeCharsetToFile("charset.out");
	outputFile("charset.out");
	return 0;
}

void writeCharsetToFile(const string& filename){
	//open output file
	ofstream file(filename);

	//file opened?
	if(!file){
		//NO, obort program
		cerr << "can't open output file \"" << filename << "\"" << endl;
		exit(EXIT_FAILURE);
	}

	//write character set
	for(int i=32;i<256;++i){
		file << "value:	" << setw(3) << i << "		"
			 << "char:	" << static_cast<char>(i) << endl;
	}
}		//close file automatically

void outputFile(const string& filename){
	//open input file
	ifstream file(filename);

	//file opened?
	if(!file){
		//NO, abort program
		cerr << "cant't open input file \"" << filename << "\"" << endl;
		exit(EXIT_FAILURE);
	}

	//copy file contents to cout
	char c;
	while(file.get(c)){
		cout.put(c);
	}

}		//close file automatically
