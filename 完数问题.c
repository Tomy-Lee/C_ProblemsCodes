/*��Ŀ����
 ��д��������һ��������M�����[1,M]�ڵ����С���������ÿ���һ�������������һ���������Ի��н�����
 ��ν������������ָһ����ǡ�õ�����������ֵ�����Ӳ�������������֮�͡�����6����������Ϊ6=1+2+3��
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
