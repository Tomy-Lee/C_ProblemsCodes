/*学院最近得到一笔赞助，领导打算用来给成绩排名前五的同学发奖学金。那么，在这之前，领导需要知道学生的排名情况，
由于学院对于不同课程的重视程度不同，所以这次参与评奖学金的课程只有数学、英语和程序设计（C语言），排名时首先按
这三门课的总分排序，如果总分相同，再按照学生的学号（一个整数）排序。在排好序之后，需要告诉领导前五名同学的具体信息。
输入格式
输入的第一行为一个整数N（5<=N=1000），表示学生的个数。

接下来包括N行，每行四个整数，分别表示学生的学号、数学成绩、英语成绩、C语言成绩，数字之间以空格隔开。

输出格式
 输出包括5行，表示前五名同学的信息。

输出的每一行包括五个整数，分别为学生的学号、数学成绩、英语成绩、C语言成绩和三门课的总分，整数之间以空格隔开，结尾无空格。

*/
#include<stdio.h>
int main() {
	int number[1001], math[1001], english[1001], c[1001], sum[1001];
	int n, i, a, b, d;
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d%d%d%d", &number[i], &math[i], &english[i], &c[i]);
		sum[i] = math[i] + english[i] + c[i];
	}
	for(d = 0; d < n; d++) {
		for(a = 0; a < n - 1; a++) {
			if(sum[a] < sum[a+1]) {
			    b = sum[a+1];
			    sum[a+1] = sum[a];
		    	sum[a] = b;
		        b = number[a + 1];
		        number[a+1] = number[a];
		        number[a] = b;
		        b = math[a+1];
			    math[a+1] = math[a];
			    math[a] = b;
			    b = english[a+1];
			    english[a+1] = english[a];
			    english[a] = b;
			    b = c[a+1];
			    c[a+1] = c[a];
			    c[a] = b; 	
			}
			if(sum[a] == sum[a+1] && number[a] > number[a+1]) {
			    b = sum[a+1];
			    sum[a+1] = sum[a];
			    sum[a] = b;
		        b = number[a + 1];
		        number[a+1] = number[a];
		        number[a] = b;
		        b = math[a+1];
			    math[a+1] = math[a];
		     	math[a] = b;
		    	b = english[a+1];
		    	english[a+1] = english[a];
		    	english[a] = b;
		    	b = c[a+1];
		    	c[a+1] = c[a];
		    	c[a] = b;	
			}
		}
	}
	for(i = 0; i < 5; i++) {
		printf("%d %d %d %d %d\n",number[i], math[i], english[i], c[i], sum[i]);
	}
	return 0;
}
