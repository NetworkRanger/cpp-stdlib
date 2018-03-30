#include <istream>
#include <limits>

class ignoreLine{
private:
	int num;
public:
	explicit ignoreLine(int n=1) : num(n){}

	template <typename charT, typename traits>
	friend std::basic_istream<charT, traits>&
	operator>>(std::basic_istream<charT, traits>& strm, const ignoreLine& ign){
		//skip until enf-of-line num times
		for(int i=0;i<ign.num;++i){
			strm.ignore(std::numeric_limits<std::streamsize>::max(), strm.widen('\n'));
		}

		//return stream for concatenation
		return strm;
	}
};
