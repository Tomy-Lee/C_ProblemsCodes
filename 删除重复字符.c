#include<stdio.h>
int main() {
    char a[100],b[100];
    int  n=0, m=0, i, flag;
    scanf("%s",a);
    for(n=0; a[n]!='\0'; n++) {
        flag = 1;
        for(i=0; i<m; i++)
             if(b[i] == a[n])   flag=0;
        if(flag == 1) {
             b[m]=a[n];
             m++;
        }
    }
    b[m]='\0';
    printf("%s\n",b);
}
