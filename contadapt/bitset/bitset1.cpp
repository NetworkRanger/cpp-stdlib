#include <bitset>
#include <iostream>
using namespace std;

int main(){
	//enumeration type of the bits
	//-each bit represents a color
	enum Color{
		red, yellow, green, blue,
		white, black, numColors
	};

	//create bitset for all bits/colors
	bitset<numColors> usedColors;

	//set bits for all bits/colors
	usedColors.set(red);
	usedColors.set(blue);

	//print some bitset data
	cout << "bitfield of used colors:	" << usedColors << endl;
	cout << "number of used colors:		" << usedColors.count() << endl;
	cout << "bitfield of unused colors:	" << usedColors << endl;

	//if any color is used
	if(usedColors.any()){
		//loop over all colors
		for(int c = 0;c<numColors;++c){
			//if the actual color is used
			if(usedColors[(Color)c]){
			}
		}
	}
}
