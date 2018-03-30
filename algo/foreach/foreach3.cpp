#include "algostuff.hpp"
using namespace std;

//function object to process the mean value
class MeanValue{
private:
	long num;		//number of elemnets
	long sum;		//sum of all elemnet values
public:
	//constructor
	MeanValue() : num(0),sum(0){}

	//function all
	//-process one more element of the sequence
	void operator()(int elem){
		++num;			//increment count
		sum += elem;	//add value	
	}
	
	//return mean vlaue (implict type conversion)
	operator double(){
		return static_cast<double>(sum)/static_cast<double>(num);
	}
};


int main(){
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 8);

	//process and print mena value
	double mv = for_each(coll.begin(), coll.end(), MeanValue());
	cout << "mean value:	" << mv << endl;
	return 0;
}
