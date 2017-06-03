#include<stdio.h>
void dec2bin(int n) { 
     int b[64], i;  
     for (i = 0; n > 0; i++) { 
         b[i] = n % 2;           
         n /= 2;            
     } 
     while (i-- > 0) 
         printf("%d", b[i]);   
} 
int main() {
	int n;
	scanf("%d", &n);
	dec2bin(n);
	return 0;
}
 
