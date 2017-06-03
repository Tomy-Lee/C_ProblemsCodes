#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
 int i=0,j=0;
 int*(*p);
 int temp = 1;
 int t;
 p = (int**)malloc(sizeof(int*)*n);
 for (t=0;t<n;t++)
 {
  p[t]=(int*)malloc(sizeof(int)*n);
 }
 for (t=0;t<((float)n/2);t++)
 {
  for (;j<n-t;j++)
   p[i][j] = temp++;
  j--;
  i++;
  for(;i<n-t;i++)
   p[i][j] = temp++;
  i--;
  j--;
  for(;j>=t;j--)
   p[i][j] = temp++;
  j++;
  i--;
  for(;i>t;i--)
   p[i][j] = temp++;
  j++;
  i++;
 }
 for (i=0;i<n;i++)
 {
  for (j=0;j<n;j++)
  {
   printf("%-3d",p[i][j]);
  }
  printf("\n");
 }
}
