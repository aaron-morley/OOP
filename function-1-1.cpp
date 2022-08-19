// function-1-1.cpp    
	
	
void string_2d_copy(std::string first[][2], std::string second[][2], int n) {
    //exit(0);
    for (int index = 0; index < n; index++) {
        //std::copy(&first[n][0], &first[n][1], &second[n][0]);
        second[index][0] = first[index][0];
        second[index][1] = first[index][1];
    }
}