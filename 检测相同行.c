//输入已知行数n和测试次数m，每行是3个元素，检测测试中样例是否是原来n行中的某一行。
/*例如  2  2
   1 2 3
   5 6 4
   1 2 3
   Yes
   5 4 6
   No*/
#include <stdio.h>
void sort(int *a, int left, int right);
int bsearchWithoutRecursion(int array[],int low,int high,int target);
int matrix[1000005][3];
int hhh[1000005];
int main() {
	int n, m, i, j, a = 0;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i ++) {
		for (j = 0; j < 3; j ++) {
			scanf("%d", &matrix[i][j]);
		}
	}
	for (i = 0; i < n; i ++)
		hhh[i] = matrix[i][0] * 1000000 + matrix[i][1] * 1000 + matrix[i][2];
	sort(hhh, 0, n-1);
	int num[3];
	while (m > 0) {
		for (i = 0; i < 3; i ++)
			scanf("%d", &num[i]);
		a = num[0] * 1000000 + num[1] * 1000 + num[2];
		if(bsearchWithoutRecursion(hhh, 0, n - 1, a))
			printf("Yes\n");
		else
			printf("No\n");
		m -= 1;
	}
	return 0;
}

void sort(int *a, int left, int right)
{
    if(left >= right)
    {
        return ;
    }
    int i = left;
    int j = right;
    int key = a[left];

    while(i < j)
    {
        while(i < j && key <= a[j])
        {
            j--;
        }

        a[i] = a[j];
        while(i < j && key >= a[i])
        {
            i++;
        }

        a[j] = a[i];
    }

    a[i] = key;
    sort(a, left, i - 1);
    sort(a, i + 1, right);

}

int bsearchWithoutRecursion(int array[],int low,int high,int target)
{
while(low<=high)
{
int mid=(low+high)/2;
if(array[mid]>target)
high=mid-1;
else if(array[mid]<target)
low=mid+1;
else
return 1;
}
return 0;
}
 
