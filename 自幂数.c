#include<stdio.h> 
#include<math.h> 
int zimishu(int i, int n){    
    int a=0;     
    int b=i;   
    while (i>=1){         
         a+=(int)pow(i%10, n);         
         i=i/10;    
        }     
          if(b==a) return 1;     
          else return 0;      
    }
int main(){     
    int i, n;     
    scanf("%d", &n);     
    for(i=(int)pow(10,n-1)+1;i<(int)pow(10,n);i++){         
    if(zimishu(i,n)==1) printf("%d\n", i);     
    }     
    return 0; 
}
