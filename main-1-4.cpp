// main-1-4.cpp

#include <iostream>
#include function-1-4.cpp
using namespace std;
	
	
int main() {
	double old_array[10] = {1.0,2.9,3.8,4.7,5.6,6.5,7.4,8.3,9.2,10.1};
	double new_array[10];
	int length = (sizeof(old_array)/sizeof(*old_array));

    copy_doubles(old_array, new_array, length);
}