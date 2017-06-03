/*题目描述
 编写程序，输入一个正整数M，输出[1,M]内的所有“完数”。每输出一个数（包括最后一个数）均以换行结束。
 所谓“完数”，是指一个数恰好等于它的因子值（因子不包括该数本身）之和。例如6是完数，因为6=1+2+3。
*/ 
#include<stdio.h>
int wanshu(int a) {
	int i, sum=0;
	for(i=1; i<a; i++) {
		if(a % i ==0) {
			sum += i;
		}
	}
	if(sum==a) return 1;
	else 
	   return 0;
}
int main() {
	int m, i;
	scanf("%d", &m);
	for(i=1; i<=m; i++) {
		if(wanshu(i)) printf("%d\n", i);
	}
	return 0;
}
