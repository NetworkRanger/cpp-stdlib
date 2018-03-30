#include <chrono>
#include <ctime>
#include <string>

//convert timepoint of system clock to calendar time string
inline std::string asString(const std::chrono::system_clock::time_point& tp){
	//convert to system time:
	std::time_t t = std::chrono::system_clock::to_time_t(tp);
	std::string ts = ctime(&t);		//convert to calendar time
	ts.resize(ts.size()-1);			// skip trailing newline
	return ts;
}

//convert calendar time to timepoint of system clock
inline std::chrono::system_clock::time_point makeTimePoint(int year, int mon, int day,
															int hour, int min, int sec=0){
	struct std::tm t;
	t.tm_sec = sec;			//second of minute(0..59 and 60 for leap seconds)
	t.tm_min = min;			//minute of hour(0..59)
	t.tm_hour = hour;		//hour of day(0..23)
	t.tm_mday = day;		//day of month(0..31)
	t.tm_mon = mon-1;		//month of year(0..11)
	t.tm_year = year-1900;	//year since 1900
	t.tm_isdst = -1;		//determine whether daylight saving time
	std::time_t tt = std::mktime(&t);
	if(tt == -1){
		throw "no valid system time";
	}
	return std::chrono::system_clock::from_time_t(tt);
}
