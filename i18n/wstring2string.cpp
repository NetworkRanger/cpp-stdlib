#include <string>
#include <iostream>
#include "wstring2string.hpp"

int main(){
	std::string s = "hello, world\n";
	std::wstring ws = to_wstring(s);
	std::wcout << ws;
	std::cout << to_string(ws);
	return 0;
}
