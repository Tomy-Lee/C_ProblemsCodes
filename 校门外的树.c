#include<stdio.h>
int main() {
    int changdu, shumu, c, b, i, sum, q;
    scanf("%d", &changdu);
    int a[changdu+1]={0};
    scanf("%d", &shumu);
    while(shumu--) {
        scanf("%d%d", &c, &b);
        for(i=c-1;i<b;i++) {
            a[i]=1;
        }
    }
    sum = 0;
    for(i=0;i<changdu+1;i++) {
        sum+=a[i];
    }
    q = changdu+1-sum;
    printf("%d\n", q);
    return 0;
}
