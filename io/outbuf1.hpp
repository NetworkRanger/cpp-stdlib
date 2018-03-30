#include <streambuf>
#include <locale>
#include <cstdio>

class outbuf : public std::streambuf{
protected:
	//central output function
	//- print characters in uppercase mode
	virtual int_type overflow(int_type c){
		if(c != EOF){
			//convert lowercase to uppercase
			c  = std::toupper(c, getloc());

			//and write the character to the standard output
			if(std::putchar(c) == EOF){
				return EOF;
			}
		}
		return c;
	}
};
