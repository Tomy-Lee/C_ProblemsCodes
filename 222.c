#include<stdio.h>
#include<stdlib.h>
int main (){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a == b + c) {
		c == a + b;
		printf("%d", c);
	}
	if (a == b - c) {
		c == b + c;
		printf("%d", c);
	}
	if (a == b * c) {
		c == b * c * c;
		printf("%d", c);
	}
	if (a != b + c) {
	    printf ("          ***\n");
	    printf ("           *\n"); 
    }
	else
	    printf("hhh");
	    system("pause\n");
	    return 0;
}
