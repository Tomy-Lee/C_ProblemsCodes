/*ѧԺ����õ�һ���������쵼�����������ɼ�����ǰ���ͬѧ����ѧ����ô������֮ǰ���쵼��Ҫ֪��ѧ�������������
����ѧԺ���ڲ�ͬ�γ̵����ӳ̶Ȳ�ͬ��������β�������ѧ��Ŀγ�ֻ����ѧ��Ӣ��ͳ�����ƣ�C���ԣ�������ʱ���Ȱ�
�����ſε��ܷ���������ܷ���ͬ���ٰ���ѧ����ѧ�ţ�һ���������������ź���֮����Ҫ�����쵼ǰ����ͬѧ�ľ�����Ϣ��
�����ʽ
����ĵ�һ��Ϊһ������N��5<=N=1000������ʾѧ���ĸ�����

����������N�У�ÿ���ĸ��������ֱ��ʾѧ����ѧ�š���ѧ�ɼ���Ӣ��ɼ���C���Գɼ�������֮���Կո������

�����ʽ
 �������5�У���ʾǰ����ͬѧ����Ϣ��

�����ÿһ�а�������������ֱ�Ϊѧ����ѧ�š���ѧ�ɼ���Ӣ��ɼ���C���Գɼ������ſε��ܷ֣�����֮���Կո��������β�޿ո�

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
