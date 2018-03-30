#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//function object to process the mean value
class MeanValue{
private:
	long num;	//number of elemnets
	long sum;	//sum of all element values
public:
	//constuctor
	MeanValue() : num(0), sum(0){}

	//"functional call"
	//-prcess one more elemnet of the sequence
	void operator()(int elem){
		++num;		//increment count
		sum += elem;
	}

	//return mena value
	double value(){
		return static_cast<double>(sum)/static_cast<double>(num);
	}
};

int main(){
	vector<int> coll = {1, 2, 3, 4, 5, 6, 7, 8};

	//process and print mean value
	MeanValue mv = for_each(coll.begin(), coll.end(), MeanValue());

	cout << "mean value:	" << mv.value() << endl;
	return 0;
}
