#include<stdio.h>
int main(){
	char c='A';
	int i=1, j;
	j=!c&&i++;
	printf("%d %d\n", i, j);
	return 0;
}
