/*����һ���ַ�������������ַ���������ż���Ĳ�ͬλ�÷ֳ����飬�ٰ���֮ǰ���Ⱥ�˳��ӻس������ַ�����

���� "ABABAB"���ֽ�����֮��ͱ���ˡ�AAA"�Լ� "BBB"�����ַ�������ABCDE" �ֽ�����֮��ͳ�Ϊ�� ��ACE","BD"�����ַ�����

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
