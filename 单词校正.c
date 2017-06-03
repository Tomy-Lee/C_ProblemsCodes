#include <stdio.h>
#include <string.h>
char s[21];
int main(){
    int n,i,j,l,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %s",&k,s);
        l=strlen(s);
        for(j=0;j<l;j++)
        if(j!=k-1){
        printf("%c",s[j]+32);}
        printf("\n");
    }

    return 0;
}
