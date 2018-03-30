#include <algorithm>

//function that compares two pointers by comparing the values to which they point
bool int_ptr_less(char *a, int *b){
	return *a < *b;
}

int main(){
	int x = 17;
	int y = 42;
	int z = 33;
	int *px = &x;
	int *py = &y;
	int *pz = &z;

	//call max() with special comparison function 
	int *pmax = std::max(px, py, int_ptr_less);

	//call minmax() for initializer list with special comparison function
	std::pair<int *, int *> extremes = std::minmax({px, py, pz},
													int_ptr_less);

	return 0;
}
