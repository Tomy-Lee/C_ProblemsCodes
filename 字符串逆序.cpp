#include<stdio.h>
#include<string>

int main() {
    char str[80];
    gets(str);
	int len=strlen(str);
 	int i;
   	for(i=len-1; i>=0; i--)  
	   putchar(str[i]);
   	return 0;
}
