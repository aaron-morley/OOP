// function-1-3.cpp

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
