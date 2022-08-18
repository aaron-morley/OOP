// main-1-4.cpp

#include <iostream>
using namespace std;
	
void copy_doubles(double *old_array, double *new_array, int length) {
    double *a1 = old_array;
    double *a2 = new_array;

    for(int i=0 ; i<length ; i++) {
        *(a2+i) = *(a1+i);
    }
    
    for(int i=0; i<length; ++i) {
        cout << *(a2+i) << endl;
    }
}
	
int main() {
	double old_array[10] = {1.0,2.9,3.8,4.7,5.6,6.5,7.4,8.3,9.2,10.1};
	double new_array[10];
	int length = (sizeof(old_array)/sizeof(*old_array));

    copy_doubles(old_array, new_array, length);
}
