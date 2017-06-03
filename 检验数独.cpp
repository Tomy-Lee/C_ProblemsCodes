//1009   检验数独是否正确 
#include <vector>
bool isValidSudoku(int arr[81]) {  
    vector<int> row(9, 0);  
    vector<int> col(9, 0);   
    vector<int> grid(9, 0);  
    for(int i = 0; i < 81; i++)  
    {  
        int x = i / 9, y = i % 9;  
        int n = arr[i];  
        if (n < 1 || n > 9)  
            return false;  
        if (row[x] & (1 << n))   
            return false;  
        else  
            row[x] |= (1 << n);  
        if (col[y] & (1 << n) )   
            return false;  
        else  
            col[y] |= (1 << n);  
        int kgrid = (x / 3) * 3 + y / 3;  
        if ( grid[kgrid] & (1 << n))   
            return false;  
        else  
            grid[kgrid] |= (1 << n);  
    }  
    return true;  
}
bool sudoku(int g[9][9]) {
  int arr[81] = {0};
  int k = 0;
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      arr[k++] = (*(*(g + i) + j));
    }
  }
 bool a =  isValidSudoku(arr);
 return a;
}   
