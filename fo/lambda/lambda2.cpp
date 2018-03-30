#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> coll = {1, 2, 3, 4, 5, 6, 7, 8};

	//process and print mean value
	long sum = 0;
	for_each(coll.begin(), coll.end(), [&sum](int elem){
		sum += elem;
	});
	double mv = static_cast<double>(sum)/static_cast<double>(coll.size());
	cout << "mean value: " << mv << endl;
	return 0;
}
