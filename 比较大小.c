#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int a, b;
	scanf("%d%d", &a, &b);
	if (a >= b)
	    printf("前者不小于后者.\n");
    else
        printf("前者小于后者.\n");
    system("pause");
    return 0;
}
