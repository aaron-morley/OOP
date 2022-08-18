// main-2-1.cpp

#include <iostream>
using namespace std;

void multiples_of_seven(int *nums, int length) {
    int *p = nums;
	
    for(;p < nums+length; p++){
          if(*p % 7 == 0) {
              cout << *p << endl;
          }
    }
}

int main() {
	int nums[16] = {-7,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	int length = (sizeof(nums)/sizeof(*nums));

    multiples_of_seven(nums, length);
}
