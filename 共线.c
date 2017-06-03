#include<stdio.h>
int main() {
    int x1, y1, x2, y2, x3, y3, n, flag, i;
    int x[100]={0}, y[100]={0};
    scanf("%d,%d", &x1, &y1);
    scanf("%d,%d", &x2, &y2);
    scanf("%d", &n);
    flag = 0;
    for(i=0; i<n; i++) {
        scanf("%d,%d", &x[i], &y[i]);
    }
    for(i=0; i<n; i++) {
        if(((x2-x1)*(y[i]-y1))==((y2-y1)*(x[i]-x1)))  {
            printf("%d,%d\n", x[i], y[i]);
            flag = 1;
        }
    }
    if(flag==0) printf("NoOut\n");
    return 0;
}
