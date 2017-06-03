#include<stdio.h>
#include<string.h>
#define N 100
int main()
{
 char input1[N]={'0'}, input2[N]={'0'};
 int output[N+1]={0};
 gets(input1);
 gets(input2);
 int a=0,i,k,m,n;
 if(strlen(input1)>=strlen(input2)){
        m=strlen(input2);
        n=strlen(input1);
        i=m-1;
        k=n-1;
        for(i,k;i>=0;i--,k--)
        {
            output[k+1]=(input2[i]-'0'+input1[k]-'0'+a)%10;
            a=(input2[i]-'0'+input1[k]-'0'+a)/10;
        }
        for(k;k>=0;k--)
        {
            output[k+1]=(input1[k]-'0'+a)%10;
            a=(input1[k]-'0'+a)/10;
        }
        if(a)
        {
           output[k+1]=a;
        }
        else{
            output[k+1]=0;
        }
    }
      else if(strlen(input1)<strlen(input2)){
        m=strlen(input1);
        n=strlen(input2);
        i=m-1;
        k=n-1;
        for(i,k;i>=0;i--,k--)
        {
            output[k+1]=(input1[i]-'0'+input2[k]-'0'+a)%10;
            a=(input1[i]-'0'+input2[k]-'0'+a)/10;
        }
        for(k;k>=0;k--)
        {
           output[k+1]=(input2[k]-'0'+a)%10;
            a=(input2[k]-'0'+a)/10;
        }
         if(a)
        {
           output[k+1]=a;
        }
        else{
            output[k+1]=0;
        }
      }
      for (i = (output[0] == 0 ? 1 : 0); i <= n; ++i){
        printf ("%d", output[i]);
      }
      return 0;
}
