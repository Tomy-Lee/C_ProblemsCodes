/*题目描述
 

给定一个正整数k(3≤k≤15),把所有k的方幂及所有有限个互不相等的k的方幂之和构成一个递增的序列，例如，当k=3时，这个序列是： 

1，3，4，9，10，12，13，… 

（该序列实际上就是：30，31，30+31，32，30+32，31+32，30+31+32，…） 

请你求出这个序列的第N项的值（用10进制数表示）。 

例如，对于k=3，N=100，正确答案应该是981。

 

输入格式
输入两个数据，分别为k及N （k、N的含义与上述的问题描述一致，且3≤k≤15，10≤N≤1000）。

输出格式
 输出第N项的值（用10进制数表示），以换行结束。

*/ 
#include<stdio.h> 
#include <string.h> 
#include<math.h>
int main() {
    int n, m, i;
    long int sum=0;
	scanf("%d%d", &n, &m);
	for(i=(sizeof(int)*3)-1; i>=0; i--) {		 
	    int k=((m>>i)&1) ;
	    sum += k* pow(n,i);
    } 
    printf("%ld\n", sum);
}
