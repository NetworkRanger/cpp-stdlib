#include <iostream>
#include <iterator>
using namespace std;

int main(){
	//create istream iterator that reads integers from cin
	istream_iterator<int> intReader(cin);

	//create end-of-stream iterator
	istream_iterator<int> intReaderEOF;

	//while able to read tokens with istream iterator
	//-write them twice
	while(intReader != intReaderEOF){
		cout << "once:			" << *intReader << endl;
		cout << "once again:		" << *intReader << endl;
		++intReader;
	}
	return 0;
}
