/*�ӵ�һ���ַ�����ɾ�������ڵڶ����ַ����г��ֵ��ַ�(������ĸ����㡢���ֵ������ַ�)��
���ܸı������ַ���˳�����ִ�Сд�� �����п��Լ��������ַ����ĳ��ȶ�С��100���ַ���
���磺�����ַ����ֱ�Ϊ"a1b2c3hello123"��"123hello"���ѵڶ����ַ����г��ֵ��ַ�ȫ���޳�֮����Ϊ"abc"��

�����ʽ
 ��Ϊ���У��ֱ�Ϊ�����ַ������ַ����м�û�пո�

�����ʽ
 ����޳���Ľ����ռһ�У��ַ���ĩβ�л��з�
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
