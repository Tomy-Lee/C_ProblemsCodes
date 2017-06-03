#include "stdio.h"
int main()
{
	int i,*p,a[10],max,min;
	p=a;
	printf("ÇëÊäÈë10¸öÊı:\n");
	for(i=0;i<10;i++)
		scanf("%d", p+i);
    max= min = *p;
	for(i=0;i<10;i++) {
		if(min>=*(p+i))
			  min=*(p+i);
		if(max<=*(p+i))
		   	  max=*(p+i);
	}
	for(i=0;i<10;i++) 
		if(min==*(p+i)) {
			*(p+i)=*p;
			*p=min;
		}
	for(i=0;i<10;i++)
		if(max==*(p+i)) {
			*(p+i)=*(p+9);
			*(p+9)=max;
		}
	for(i=0;i<10;i++)
		printf("%3d",*(p+i));
	return 0;
}
