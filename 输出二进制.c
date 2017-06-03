#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, a;
    char b[]={0};
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &a);
        printf("%s\n", itoa(a, b, 2));
    }
    return 0;
}
