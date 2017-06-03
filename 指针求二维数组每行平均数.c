#include<stdio.h>
void f(int (*p)[3],float *q) {
       int i,j;
       for(i=0; i<5; i++)
           for(j=0; j<3; j++) {
               *(q+i)+=*(*(p+i)+j);
       }
}

int main() {
     int a[5][3], i, j;
     int (*p)[3]=a;
     float sum[5]={0}, *q=sum;
     for(i=0; i<5; i++)
         for(j=0; j<3; j++)
             scanf("%d",&a[i][j]);
    f(a,sum);
    for(i=0; i<5; i++)
    printf("第%d行的平均值为：%f\n", i+1, sum[i]/5);
}
