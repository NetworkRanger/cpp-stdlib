#include <iostream>

namespace MyLib{
	double readAndProcessSum(std::istream& strm){
		using std::ios;
		double value, sum;

		//save current state of exception flags
		ios::iostate oldExceptions = strm.exceptions();

		//let failbit and badbit throw exceptions
		//-NOTE:failbit is also set at end end-of-file
		strm.exceptions(ios::failbit|ios::badbit);

		try{
			//while stream is OK
			//-read value and add it to sum
			sum = 0;
			while(strm >> value){
				sum += value;
			}
		}catch(...){
			//if exception not caused by end-of file
			//-restore old state of exception flags
			//-rethrow exception
			if(!strm.eof()){
				strm.exceptions(oldExceptions);		//restore exception flags
				throw;								//rethrow
			}
		}

		//restore old state of exception flags
		strm.exceptions(oldExceptions);
		//return sum
		return sum;
	}
}
