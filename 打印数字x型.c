#include<stdio.h>
#include<stdlib.h>
int main() {
    int i, j, k;
    char ch;
    scanf("%c", &ch);
    int n= ch-48;
    if (ch > 57 || ch < 48) printf("input error\n");
    else {
        ch = ch - n + 1;
        for (i=1; i<=n; i++) {
            if (ch < 48) ch = ch + 10;
            if (ch > 57) ch = ch - 10;
            for (j=1; j<=2*n-i; j++) {
                if (j==i || j == 2*n-i) putchar(ch);
                else printf(" ");
            }
            printf("\n");
            ch++;
            }
            for (i=1; i<=n-1; i++) {
                if (ch < 48) ch = ch + 10;
                for (j=1; j<=2*n-1; j++) {
                    if (j==n-i || j==n+i) putchar(ch);
                    else printf(" ");
                }
                printf("\n");
                ch++;
            }
        }
        system("pause");
}
