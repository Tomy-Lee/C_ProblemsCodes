#include <stdio.h>
int main() {
     int a, b, i, j, t, u, x;
     long n;
     scanf("%d%d", &a, &b);
     n=0;
     for(j = a; j <= b; j++) {
         for(i = a; i <= j-1; i++) {
             t = 0;
             x = 0;
             for( u = 2; u <= i-1; u++) {
                  if (i%u==0) {
                      x=1;
                      break;
                    }
                }
             for( u = 2; u <= j-1; u++) {
                  if (j%u==0) {
                      t=1;
                      break;
                    }
                }
             if(t==0&&x==0) {
                     n++;
                }
            }
        }
    printf("%ld\n", n);
    return 0;
}



