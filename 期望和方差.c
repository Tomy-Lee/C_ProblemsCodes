#include<stdio.h>
#include<math.h>
int main(){
	int n, i;
	double x1, x2, x3;
	int a[100000]={0};
	scanf("%d", &n);
	x1=x2=x3=0;
    for(i=0; i<=n-1; i++){
    	scanf("%d", &a[i]);
    	x1=(double)a[i]/n+x1;
    	x2=x2+pow(a[i], 2)/n;
    }
    x3=x2-x1*x1;
    printf("%.2lf %.2lf\n", x1, x3);
	return 0;
}
