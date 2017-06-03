/*从第一个字符串中删除所有在第二个字符串中出现的字符(包括字母、标点、数字等所有字符)，
不能改变其它字符的顺序，区分大小写。 程序中可以假设所有字符串的长度都小于100个字符。
例如：两个字符串分别为"a1b2c3hello123"，"123hello"，把第二个字符串中出现的字符全部剔除之后结果为"abc"。

输入格式
 分为两行，分别为两个字符串，字符串中间没有空格

输出格式
 输出剔除后的结果，占一行，字符串末尾有换行符
*/ 
#include<stdio.h>
#include<string.h>
char str[100];
char str1[100];
int array[100]={0};
int main() {
    scanf("%s %s",str,str1);
    int n=strlen(str);
    for(int i=0; i<n; i++) {
        for(int j=0; str1[j]!='\0'; j++) {
            if(str[i]==str1[j]) {
                array[i]=1;break;
            }
        }
    }
    for(int i=0; i<n; i++) {
        if(array[i]==0)
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}     
