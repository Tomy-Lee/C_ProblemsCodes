#include<stdio.h>
int main(){
    int n, i, f3;
    scanf("%d", &n);
    int f1 = 1;
    int f2 = 1;
    printf("%d\n%d", f1, f2);
    for(i=1;i<=n-2;i++) {
        f3 = f1 + f2;
        printf("\n%d", f3);
        f1 = f2;
        f2 = f3;
    }
    return 0;
}
