#include <iostream>

inline std::istream& operator>>(std::istream& strm, Fraction& f){
	int n, d;

	strm >> n;			//read value of the numerator
	strm.ignore();		//skip '/'
	strm >> d;			//read value of the denominator

	f = Fraction(n, d);		//assing the whole fraction

	return strm;
}
