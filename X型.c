#include<stdio.h>
#include<stdlib.h>
int main() {
    int i, n, j, k;
    char ch;
    scanf("%d %c", &n, &ch);
    if (ch > 'Z' || ch < 'A') printf("input error\n");
    else {
        ch = ch + n - 1;
        for (i=1; i<=n; i++) {
            if (ch < 'A') ch = ch + 26;
            if (ch > 'Z') ch = ch - 26;
            for (j=1; j<=2*n-i; j++) {
                if (j==i || j == 2*n-i) putchar(ch);
                else printf(" ");
            }
            printf("\n");
            ch--;
            }
            for (i=1; i<=n-1; i++) {
                if (ch < 'A') ch = ch + 26;
                for (j=1; j<=2*n-1; j++) {
                    if (j==n-i || j==n+i) putchar(ch);
                    else printf(" ");
                }
                printf("\n");
                ch--;
            }
        }
        system("pause");
}
