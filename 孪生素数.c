//��������䣬����������ڵ���������������һ�����ͱ�����2��������������
#include<stdio.h>
#include<math.h>
int sushu(int n) {
    if(n==1) return 0;
    else if(n==2) return 1;
    else {
        int i;
        int flag=1;
    for(i=2; i<(sqrt(n)+1); i++) {
        if(n%i==0) flag=0;
        }
        return flag;
    }
}
int main() {
    int j, x, y;
    scanf("%d%d", &x, &y);
    for(j=x; j<=y-2; j++) {
        if(sushu(j)&&sushu(j+2)) printf("%d,%d\n", j, j+2);
    }
    return 0;
}
