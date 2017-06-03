#include <stdio.h>
int gcd(int m, int n) {
    int t;
    if(m<n) {
        t=m;
        m=n;
        n=t;
    }
    if(m%n==0) return n;
    gcd(m%n,n);
}

int main(){
     int a, b;
     while(scanf("%d%d", &a, &b)!=EOF) {
         printf("%d\n", gcd(a,b));
     }
         return 0;
}
