// main-2-1.cpp

#include <iostream>
#include <function-2-1.cpp>
using namespace std;


int main() {
	int nums[16] = {-7,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	int length = (sizeof(nums)/sizeof(*nums));

    multiples_of_seven(nums, length);
}
