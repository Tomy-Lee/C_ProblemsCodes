#include <stdio.h>
char a[101][101]={0};
int main() {
    int n, m, i, j;
    char ch;
    while (scanf("%d%d", &n, &m)!=EOF) {
           scanf("%c",&ch);
           for (i = 1; i <= n; i++) {
                for (j = 1; j <= m; j++) {
                     scanf("%c", &a[i][j]);
                if (a[i][j]=='b') a[i][j] += 2;
                }
           scanf("%c", &ch);
           }
           for (i = 1; i <= n; i++) {
                for (j = m; j >= 1; j--)
                     printf("%c",a[i][j]);
          printf("\n");
          }
    printf("\n");
    }
    return 0;
}
