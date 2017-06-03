#include "stdio.h"
long get(long n,long k) {
     if (k==0||n==k) return 1;
     else return get(n-1,k-1)+get(n-1,k);
    }
void output(long n) {
     int i,j;
     for(i=0;i<=n;i++) {
         for(j=0;j<=i;j++)
            printf(" %5ld",get(i,j));
         printf("\n");
        }
    }
int main() {
     long n;
         printf("请输入要输出的杨辉三角的行数:");
         scanf("%d",&n);
         output(n);
         return 0;
}
