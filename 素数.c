#include<stdio.h>
#include<math.h>
int main(){
	int i, a, b; 
	scanf("%d", &a);
	if(a==1)printf("No\n");
	else if(a==2)printf("Yes\n");
	else{
	
	b=0;
    for(i=2; i<=sqrt(a); i++){
    	if(a%i==0){
    	printf("No\n");
    	b=1;
    	break;
		}
    }
    if(b==0)printf("Yes\n");
    }
	return 0;
}
