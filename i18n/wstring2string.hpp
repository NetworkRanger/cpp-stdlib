#include <locale>
#include <vector>

//convert string to wstring
std::wstring to_wstring(const std::string& str, const std::locale& loc = std::locale()){
	std::vector<wchar_t> buf(str.size());
	std::use_facet<std::ctype<wchar_t>>(loc).widen(str.data(), str.data()+str.size(), buf.data());
	return std::wstring(buf.data(), buf.size());
}

//convert wstring to string with '?' as default character
std::string to_string(const std::wstring& str, const std::locale& loc = std::locale()){
	std::vector<char> buf(str.size());
	std::use_facet<std::ctype<wchar_t>>(loc).narrow(str.data(), str.data()+str.size(), '?', buf.data());
	return std::string(buf.data(), buf.size());
}
