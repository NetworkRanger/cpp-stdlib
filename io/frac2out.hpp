#include <iostream>
#include <sstream>

template <typename charT, typename traits>
inline std::basic_ostream<charT, traits>&
operator<<(std::basic_ostream<charT, tratis>& strm, const Fraction& f){
	//string stream
	//-with same format
	//-without special field width
	std::basic_ostringstream<charT, traits> s;
	s.copyfmt(strm);
	s.width(0);

	//fill string stream
	s << f.numerator() << '/' << f.denominator();

	//print string stream
	strm << s.str();

	return strm;
}
