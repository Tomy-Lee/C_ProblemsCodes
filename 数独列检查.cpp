//1013  ������������Ƿ��������� 
#include<algorithm>
bool columns(int a[9][9]) {
    int i, j, visit[100];
    for (i = 0; i < 9; i++) {
        sort(a[i], a[i]+9);
        for (j = 0; j < 9; j++) {
            if (a[i][j] != i+1) return false;
        }
    }
    return true;
}  
