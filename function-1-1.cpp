// function-1-1.cpp    
	
	
	struct str {
        string s;
    };
    
   const int rows = 3;
   const int columns = 2;
   std::string a[rows][columns] = { };
   std::string b[rows][columns] = { };

void string_2d_copy(std::string first[][2], std::string second[][2], int n) {
    std::copy(a[0], a[3]+1, b[0]);
}