#include<stdio.h>
int main()
{
    int a[20];
    int i;
    int j;
    int sign;
    scanf("%d",&a[0]);
    printf("%d ",a[0]);
    for(i=1;i<=19;i++){
        scanf("%d",&a[i]);
        sign=1;
        for(j=0;j<=i-1;j++){
            if(a[i]==a[j]){
                sign=0;
                break;
            }
        }
         if(sign==1)
         {
           printf("%d",a[i]);
           if(i<19) printf(" ");
    }
    }
    return 0;
}   
