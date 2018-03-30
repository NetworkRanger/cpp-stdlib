#include <istream>

namespace MyLib{
	double readAndProcessSum(std::istream& strm){
		double value, sum;

		//while stream is OK
		//-read  value and add it to sum
		sum = 0;
		while(strm  >> value){
			sum += value;
		}

		if(!strm.eof()){
			throw std::ios::failure("input error in readAndProcessSum()");
		}

		//return sum
		return sum;
	}
}
