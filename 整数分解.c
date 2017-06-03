#include<stdio.h>
#include<math.h>
int main() {
    unsigned int i, n, m, k=0;                                                       //k标记是否有解，n存储输入数据，m为n最多拆分个数
    scanf("%d", &n);
    m = sqrt(n + n);
    for(i = m; i >= 2; i--) {
        if( (n % i == 0) && (i%2) ) {                                               //可分解为奇数个
             k=1;                                                                   //标记有解
             for (unsigned int j=(n/i-i/2); j <= (n / i + i / 2); j++) {            //输出
                  printf("%d ", j);
                  }
             printf("\n");
        }
        else if( (n % i == i / 2) && ( (i+1) % 2) ) {                                //可分解为偶数个
             k=1;                                                                     //标记有解
             for (unsigned int j=( (n-1) / i-(i/2-1) ); j <= ( (n-1) / i + i / 2); j++) {        //输出
                  printf("%d ", j);
                 }
             printf("\n");
        }
   }
   if(k == 0)    printf("NONE\n");                                                 //无法分解
   return 0;
}
