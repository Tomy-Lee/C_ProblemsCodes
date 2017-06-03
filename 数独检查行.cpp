//1012 检查数独的一行是否满足条件 
bool rows(int r[9][9]) {
    int row[9] = { 0 };
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if ((1 << r[i][j]) & row[i]) {
                return false;
            }
            else {
                row[i] |= (1 << r[i][j]);
            }
        }
    }
    return true;
}        


