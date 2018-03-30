#include <iostream>
#include <locale>
#include <exception>
#include <cstdlib>
using namespace std;

int main(){
	try{
		//use classic C locale to read data from standard input
		cin.imbue(locale::classic());

		//use a German locale to write data to standard output
		//-use different locale names for Windows and POSIX
#ifdef _MSC_VER
		cout.imbue(locale("deu_deu.1252"));
#else
		cout.imbue(locale("de_DE"));
#endif
		
		//read and output floating-point values in a loop
		cout << "input floating-point values (classic notation): " << endl;
		double value;
		while(cin >> value){
			cout << value << endl;
		}
	}catch(const std::exception& e){
		cerr << "Exception:	" << e.what() << endl;
		return EXIT_FAILURE;
	}
	return 0;
}
