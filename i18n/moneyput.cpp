#include <locale>
#include <iostream>
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
		const money_put<char>& mpG = use_facet<money_put<char>>(locG);

		//ensure that the money_put<> facet impacts the output and currency is written:
		cout.imbue(locG);
		cout << showbase;

		//use double as monetary value (use local symbol)
		mpG.put(cout, false, cout, ' ', 1234.5678);
		cout << endl;
	}catch(const std::exception& e){
		cerr << "EXCEPTION:	" << e.what() << endl;
		return EXIT_FAILURE;
	}
	return 0;
}
