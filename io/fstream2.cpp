#include <iostream>
#include <fstream>
#include <string>

int main(){
	//write string to a temporaily created file stream (since C++11)
	std::string s("hello");
	std::ofstream("fstream2.tmp") << s << std::endl;

	//write C-string to a temporaily created file stream
	//-NOTE:wrote a pointer value before C++11
	std::ofstream("fstream2.tmp", std::ios::app) << "world" << std::endl;
	return 0;
}
