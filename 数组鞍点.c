//输入数组行列数n和m，读入数组，求一个元素，是行的最大值，列的最小值
#include<stdio.h>
int main() {
    int i, j, k, n, m, q, r;
    int flag=0;
    int a[10][10]={0};
    scanf("%d%d", &n, &m);
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        int max = a[i][0];
        int q=0;
        for(j=1;j<m;j++) {
            if(a[i][j]>max) {
                max=a[i][j];
                q=j;
            }
        }
        int min=a[0][q];
        int r=0;
        for(k=1; k<n; k++) {
            if(a[k][q]<min) {
                min=a[k][q];
                r=k;
            }
        }
        if(min==max) {
            printf("a[%d][%d]=%d\n", r, q, min);
            flag=1;
            break;
        }
        max=min=0;
    }
    if(flag==0) printf("NO output\n");
    return 0;
}
