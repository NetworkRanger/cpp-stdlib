#include <locale>
#include <iostream>
#include <iomanip>
#include <exception>
#include <cstdlib>
using namespace std;

int main(){
	try{
		//use German locale:
#ifdef	_MSC_VER
		locale locG("deu_deu.1252");
#else
		locale locG("de_DE");
#endif
		
		//use German locale and ensure that the currency is written:
		cin.imbue(locG);
		cout.imbue(locG);
		cout << showbase;

		//read monetary value into long double (use international symbol)
		long double val;
		cout << "monetary value:	";
		cin >> get_money(val, true);

		if(cin){
			//write monetary value (use local symbol)
			cout << put_money(val, false) << endl;
		}else{
			cerr << "invalid format" << endl;
		}
	}catch(const std::exception& e){
		cerr << "Exception:	" << e.what() << endl;
		return EXIT_FAILURE;
	}
	return 0;
}


















