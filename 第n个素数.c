#include <stdio.h>  
#include <math.h>       
int IsPrime (int x) {
    int i;
    if (x <= 1)     
        return 0;
    else {  
        for (i = 2; i <= (int)sqrt(x); i++)
            if ((x % i) == 0)  
                return 0;
        return 1;
    }  
}  
  
int main () {  
    int n, i;  
    scanf("%d", &n);
    while (n>0) {  
        for (i = 2; i <= 100000000; i++) {  
            if (IsPrime(i))  
                n--;  
            if (n == 0) {  
                printf("%d\n", i);  
                break;  
            }  
        }  
    }  
    return 0;  
}  
