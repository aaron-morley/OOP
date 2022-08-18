// main-1-3.cpp

#include <iostream>
using namespace std;
using function-1-3.cpp

int main() {

	int old_array[10] = {1,2,3,4,5,6,7,8,9,10};
	int new_array[10];
	int length = (sizeof(old_array)/sizeof(*old_array));

    copy_integers(old_array, new_array, length);
}
    