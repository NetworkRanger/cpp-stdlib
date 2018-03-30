#include <streambuf>
#include <locale>
#include <cstdio>

template <typename charT, typename traits = std::char_traits<charT>>
class basic_outbuf : public std::basic_streambuf<charT, traits>{
protected:	
	//central output function
	//-print characters in uppercase mode
	virtual typename traits::int_type overflow(typename traits::int_type c){
		if(!traits::eq_int_type(c, traits::eof())){
			//convert lowercase to uppercase
			c = std::toupper(c, this->getloc());

			//convert the character into a char (default:'?')
			char cc = std::use_facet<std::ctype<charT>>(this->getloc()).narrow(c, '?');

			//and write the character to the standard output
			if(std::putchar(cc) == EOF){
				return traits::eof();
			}
		}
		return traits::not_eof(c);
	}
};

typedef basic_outbuf<char> outbuf;
typedef basic_outbuf<wchar_t> woutbuf;
