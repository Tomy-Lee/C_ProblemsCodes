//1014  检验数独的3*3方格 
bool blocks(int r[9][9]) {
    int row[9] = { 0 };
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if ((1 << r[i][j]) & row[(i / 3) * 3 + j / 3]) {
                return false;
            }
            else {
                row[(i / 3) * 3 + j / 3] |= (1 << r[i][j]);
            }
        }
    }
    return true;
}     
