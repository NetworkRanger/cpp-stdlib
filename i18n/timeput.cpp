#include <locale>
#include <chrono>
#include <ctime>
#include <iostream>
#include <exception>
#include <cstdlib>
using namespace std;

int main(){
	try{
		//query local time:
		auto now = chrono::system_clock::now();
		std::time_t t = chrono::system_clock::to_time_t(now);
		tm *nowTM = std::localtime(&t);

		//print local time with the global classic locale:
		locale locC;
		const time_put<char>& tpC = use_facet<time_put<char>>(locC);

		//use format stirng:
		string format = "%A %x %I%p\n";		//format:weekday data hour
		tpC.put(cout, cout, ' ', nowTM, format.c_str(), format.c_str()+format.size());

		//print local time with German locale:
#ifdef	_MSC_VER
		locale locG("deu_deu.1252");
#else
		locale locG("de_DE");
#endif
		const time_put<char>& tpG = use_facet<time_put<char>>(locG);
		tpG.put(cout, cout, ' ', nowTM, 'x');
		cout << endl;
		tpG.put(cout, cout, ' ', nowTM, format.c_str(), format.c_str() + format.size());
	}catch(const std::exception& e){
		cerr << "Exception:		" << e.what() << endl;
		return EXIT_FAILURE;
	}
	return 0;	
}
