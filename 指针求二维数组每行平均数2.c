#include <stdio.h>
void f(int *c,int m,int n) {
		int i,j;
		float average,sum;
		for(i=0; i<m; i++) {
			    sum=0.0;
				for(j=0; j<n; j++) {
			 	    sum += *(c+i*3+j);
				}
				average=sum/n;
				printf("第%d行的平均数为:%f\n", i+1, average);
		}
}

int main() {
	int i,j;
	int a[5][3] = {0};
	int *p=(int*)a;
	for(i=0; i<5; i++) {
		for(j=0; j<3; j++) {
			scanf("%d", p+i*3+j);
		}
	}
	f(p,5,3);
	return 0;
}
