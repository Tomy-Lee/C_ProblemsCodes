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
    int i;
    int k;
    int a[10000]={0};
    scanf("%d",&n);
    while(n--){
        scanf("%d",&k);
        for(i=0;i<=k-1;i++){
            scanf("%d",&a[i]);
        }
        quick_sort(a,0,k-1);
        printf("%d\n",a[k-2]);
    } 
} 
