#include <iostream>
#include <iterator>
using namespace std;

int main(){
	//input stream buffer iterator for cin
	istreambuf_iterator<char> inpos(cin);

	//end-of-stream iterator
	istreambuf_iterator<char> endpos;

	//output stream buffer iterator for cout
	ostreambuf_iterator<char> outpos(cout);

	//while input iterator is valid
	while(inpos != endpos){
		*outpos = *inpos;		//assign its value to the output iterator
		++inpos;
		++outpos;
	}
	return 0;
}
