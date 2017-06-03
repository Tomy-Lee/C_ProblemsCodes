#include<stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    int newnum = 0;
    while(num) {
        int i = num % 10;
        newnum = newnum * 10 + i;
        num = num / 10;
    }
    printf("newnum=%d\n", newnum);
    return 0;
}
