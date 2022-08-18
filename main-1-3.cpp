// main-1-3.cpp

#include <iostream>
using namespace std;

void copy_integers(int old_array[], int new_array[], int length) {
    int *a1 = old_array;
    int *a2 = new_array;

    for(int i=0 ; i<length ; i++) {
        *(a2+i) = *(a1+i);
    }
	
    for(int i=0; i<length; ++i) {
        cout << *(a2+i) << endl;
    }
}

int main() {

	int old_array[10] = {1,2,3,4,5,6,7,8,9,10};
	int new_array[10];
	int length = (sizeof(old_array)/sizeof(*old_array));

    copy_integers(old_array, new_array, length);
}
    
