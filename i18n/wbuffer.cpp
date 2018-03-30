#include <string>
#include <iostream>
#include <codecvt>
using namespace std;

int main(){
	//create input stream reading UTF-8 sequences:
	wbuffer_convert<codecvt_utf8<wchar_t>> utf8inBuf(cin.rdbuf());
	wistream utf8in(&utf8inBuf);

	//create output stream writing UTF-16 sequences:
	wbuffer_convert<codecvt_utf16<wchar_t, 0xFFFF, generate_header>> utf16outBuf(cout.rdbuf());

	//write each character read:
	wchar_t c;
	while(utf8in.get(c)){
		utf16out.put(c);
	}
	return 0;	
}
