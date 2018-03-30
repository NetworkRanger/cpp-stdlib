#include <iostream>
#include <fstream>
using namespace std;

int main(){
	//stream for hexadecimal standard ouput
	ostream hexout(cout.rdbuf());
	hexout.setf(ios::hex, ios::basefield);
	hexout.setf(ios::showbase);

	//swtich between decimal and hexadecimal output
	hexout << "hexout:	" << 177 << " ";
	cout << "cout:		" << 177 << " ";
	hexout << "hexout:	" << -49 << " ";
	cout << "cout:		" << -49 << " ";
	hexout << endl;
	return 0;
}
