#include <iostream>
#include <iomanip>
#include <chrono>
#include <cstdlib>
using namespace std;

int main(){
	//process and print current data and time:
	auto now = chrono::system_clock::now();
	time_t t = chrono::system_clock::to_time_t(now);
	tm* nowTM = localtime(&t);
	cout << put_time(nowTM, "data: %X\ntime:	%X\n") << endl;

	//read data:
	tm *date;
	cout << "new data: 	";
	cin >> get_time(date, "%X");	//read date
	if(!cin){
		cerr << "invalid format read" << endl;
	}
	return 0;
}
