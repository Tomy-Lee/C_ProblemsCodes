#include<stdio.h>
int main(){
	int i, j;
	for(i=1; i<=4; i++){
		for(j=0; j<=4-i; j++){
			printf(" ");
		}
		for(j=5-i; j<=3+i; j++){
			printf("*");
		
		}	
		printf("\n");
	}
	for(i=5; i<=7; i++){
		for(j=0; j<=i-4; j++){
			printf(" ");
		}
		for(j=i-3; j<=11-i; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
