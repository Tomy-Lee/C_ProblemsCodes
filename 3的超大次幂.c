#include<stdio.h>
int mul_3(char a[], int length) {
    int i;
    int carry;
    char digit;
    carry = 0;
    for(i = 0; i <= length - 1; i++) {
        digit = ((a[i] - '0') * 3 + carry) % 10 + '0';
        carry = ((a[i] - '0') * 3 + carry) / 10;
        a[i] = digit;
    }
    if(carry > 0) {
        a[i++] = carry + '0';
    }
    return i;
}
char ans[1000];
int main() {
    int n;
    int i;
    int length;
    scanf("%d", &n);
    ans[0] = '1';
    length = 1;
    for(i = 1; i <= n; i++) {
        length = mul_3(ans, length);
    }
    for(i = length - 1; i >=0; i--) {
        printf("%c", ans[i]);
    }
    printf("\n");
    return 0;
}       
