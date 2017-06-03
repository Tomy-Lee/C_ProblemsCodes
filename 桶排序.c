#include<stdio.h>
int paixu[1000001];
int main() {
    int n, i, number;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &number);
        paixu[number]++;
    }
    for (i = 0; i <= 1000000; i++) {
        while (paixu[i] > 0) {
            printf("%d\n", i);
            paixu[i]--;
        }
    }
}

