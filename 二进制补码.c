#include<stdio.h> 
#include <string.h> 
int main() 
{ 
	int n,i; 
	scanf("%d",&n); 
	for(i=(sizeof(int)*2)-1;i>=0;i--) 
	{		 
		printf("%d",(n>>i)&1); 
	} 
	printf("\n"); 
	return 0;        
}
