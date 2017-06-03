#include<stdio.h>
#include<math.h>
int main() {
    int n, i, a, b, sum, flag;
    flag = 0;
    scanf("%d", &n);
    for (i = pow(10,n-1); i <= (pow(10,n)-1); i++) {
        b = i;
        sum = 0;
        while (b) {
            a = b % 10;
            b = b / 10;
            sum += pow(a,n);
        }
        if (i == sum) {
            printf("%d\n", i);
            flag = 1;
        }
    }
    if (flag == 0) printf("No output.\n");
    return 0;
}
