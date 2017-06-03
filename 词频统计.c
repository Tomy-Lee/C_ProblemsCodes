/*词频统计是文本分析的一种常用手段，它的原理非常简单，即求出一篇文章中每个单词的出现次数。
在这里我们处理整数，给出一列整数，求出里面每个数的出现次数。
输入格式
 输入包括多组测试用例。

每组测试用例包括两行，第一行为一个数N（1<=N<=10000)表示该组测试用例的数据个数。

第二行为N个数ai(0<=ai<=1000)，表示这一组测试用例。

当输入N为0时结束。

输出格式
 对于每组测试用例，按照数字的大小顺次输出它们的出现次数，具体格式如下：

Case #:

x1 t1

x2 t2

.......

其中#为测试用例序号, xi, ti表示数字xi出现了ti次.
*/
#include<stdio.h>
#include<string.h>
int main() {
	int arr[10001] = {0};
	int i, j, n;
	int max = 0, sum = 0, testcase = 1;
	scanf("%d",&n);
	while(n!=0) {
		memset(arr,0,sizeof(arr));
		for(i = 0; i < n; i++) {
			scanf("%d",&arr[i]);
			if(arr[i] > max) 
			       max = arr[i];
		}
		printf("Case %d:\n",testcase);
		for(j = 0; j <= max; j++) {
			for( i = 0; i < n; i++) {
				if(arr[i] == j) {
					sum += 1;
				}
			}
			if(sum != 0) {
				printf("%d %d\n", j, sum);
			}
			sum = 0;
		}
	scanf("%d",&n);
	testcase += 1;	
	}
}
