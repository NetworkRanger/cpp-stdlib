#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
using namespace std;

int main(){
	copy(istream_iterator<string>(cin), istream_iterator<string>(), ostream_iterator<string>(cout, "\n"));
	return 0;
}
