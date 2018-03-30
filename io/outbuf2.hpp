#include <iostream>
#include <streambuf>
#include <cstdio>

//for write():
#ifdef _MSC_VER
#include <io.h>
#else
#include <unistd.h>
#endif

class fdoutbuf : public std::streambuf{
protected:
	int fd;		//file descriptor
public:
	//constructor
	fdoutbuf(int _fd) : fd(_fd){}
protected:
	//write one character
	virtual int_type overflow(int_type c){
		if(c != EOF){
			char z = c;
			if(write(fd, &z, 1) != 1){
				return EOF;
			}
		}
		return c;
	}
	//write multiple characters
	virtual std::streamsize xsputn(const char *s, std::streamsize num){
		return write(fd, s, num);
	}
};

class fdostream : public std::ostream{
protected:
	fdoutbuf buf;
public:
	fdostream(int fd) : std::ostream(0), buf(fd){
		rdbuf(&buf);
	}
};


















