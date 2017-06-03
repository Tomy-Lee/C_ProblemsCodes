//输入测试样例次数n，每次测试中，输入数字个数，然后输入这些数字；把每种数字出现的次数输出
#include<stdio.h>
quick_sort(int a[],int start,int end)
{
    int i,j;
    int k;
    int temp;
    if(start<end){ 
        i=start;
        j=end;
        while(i!=j){
            while(a[j]>=a[start]&&j>i) j--; 
            while(a[i]<=a[start]&&i<j) i++; 
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        k=i; 
        temp=a[start];
        a[start]=a[k];
        a[k]=temp;
        quick_sort(a,start,k-1);
        quick_sort(a,k+1,end);
    }
}
int main()
{
    int n;
    int k;
    int i;
    int count;
    int a[100];
    scanf("%d",&n);
    while(n--){
        scanf("%d",&k);
        for(i=0;i<=k-1;i++){
            scanf("%d",&a[i]);
        }
        quick_sort(a,0,k-1);
        count=1;
        for(i=1;i<=k-1;i++){
            if(a[i]>a[i-1]) {
                printf("%d %d\n",a[i-1],count);
                count=1;
            }
            else count++;
        }
        printf("%d %d\n",a[k-1],count);
    }
    return 0;
}  
