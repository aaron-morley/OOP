// main-2-2.cpp

#include<iostream>
using namespace std;
using function-2-2.cpp;

int main() {
	int nums[11] = {31,-41,59,26,-53,58,97,-93,-2,3,84};
	int length = (sizeof(nums)/sizeof(*nums));
	cout << "The maximum sub array sum is: " << max_sub_sum(nums, length) << endl;
    return 0;
}

