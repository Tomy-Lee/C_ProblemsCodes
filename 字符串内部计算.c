/*给出一个长度不超过10的字符串表示两个正整数相加或者相减，请求出运算结果。*/ 
#include <stdio.h>
#include <string.h>
int main() {
    char a[10] = {0};
    int length, i, j;
    while (scanf("%s", a) != EOF) {
           int  left = 0, right = 0;
           length = strlen(a);
           for (i = 0; i < length; i++)
                if (a[i] == '+' || a[i] == '-')
                     break;
           for (j = 0; j < i; j++)
                left = 10 * left + (a[j] - 48);
           for (j = i + 1; j < length; j++)
                right = 10* right + (a[j] - 48);
           if(a[i]=='-')
                printf("%d\n",left-right);
           else printf("%d\n",right + left);
    }
return 0;
}
