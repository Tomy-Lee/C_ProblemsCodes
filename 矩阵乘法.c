#include <stdio.h>
int main() {
    int n = 0;
    while (scanf("%d", &n) != EOF) {
        int a[15][15], b[15][15], result[15][15]= {0};
        int i = 0, j = 0, k = 0;
        for (i = 0; i < n; i ++) {
            for (j = 0; j < n; j ++) {
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < n; i ++) {
            for (j = 0; j < n; j ++) {
                scanf("%d", &b[i][j]);
            }
        }
        for (i = 0; i < n; i ++) {
            for (j = 0; j < n; j ++) {
                for (k = 0; k < n; k ++) {
                    result[i][j] += (a[i][k] * b[k][j]);
                }
            }
        }
        for (i = 0; i < n; i ++) {
            for (j = 0; j < n; j ++) {
                if (j == n -1)
                    printf("%d\n", result[i][j]);
                else
                    printf("%d ", result[i][j]);
            }
        }
    }
    return 0;
}       
