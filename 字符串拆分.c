/*给定一个字符串，将里面的字符按照奇数偶数的不同位置分成两组，再按它之前的先后顺序接回成两个字符串。

例如 "ABABAB"，分解重组之后就变成了“AAA"以及 "BBB"两个字符串。”ABCDE" 分解重组之后就成为了 “ACE","BD"两个字符串。

*/ 
#include<stdio.h>
char str[1001];
int main() {
    int i, j;
    while(scanf("%s", str)!=EOF) {
        for(i=0;str[i]!='\0';i++){
            if(i%2==0)
                printf("%c",str[i]);
        }
            
        printf(",");
        for(i=0;str[i]!='\0';i++){
               if(i%2==1)
                printf("%c",str[i]);
        }
         
        printf("\n");
    }
    return 0;
}       
