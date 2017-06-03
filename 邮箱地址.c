/*You've gathered some e-mail addresses from a variety of sources, 
and you want to send out a mass mailing to all of the addresses. 
However, you don't want to send out duplicate messages. 
You need to write a program that reads all e-mail addresses and discards any that already have been input.
Use one of the list classes from this chapter, modifying it as necessary to work with string data, 
and to deal with up to 500 items.

输入格式
The first line is a positive integer for the number of e-mail addresses. 
Then each of the e-mail addresses is input in one line.

输出格式
Output the new mailing list in lexicographic order. Each e-mail address in one line.

Note: ignore letter case when comparing two e-mail addresses, but the output is case sensitive.

*/
#include <stdio.h>
#include <string.h>
char temp[50] = {0};
struct youxiang {
	char a[30];
	char b[30];
};
int main() {
    int n, i, j, k;
    struct youxiang num[501], temp;
    scanf("%d", &n);
    for (i = 1 ;i <= n; i++) {
	     scanf("%s", num[i].a);  
         strcpy(num[i].b, num[i].a);
         for (j = 1; j < i; j++)
              if (strcasecmp(num[i].a, num[j].a) == 0 ) {
   	              num[j].b[0] = 'z' + 1;
              }
    }
    for (i = 1; i <= n; i++)    
         for (j = i; j <= n; j++) {
	          if(strcasecmp(num[i].a, num[j].a) > 0) {
	           	  temp = num[i];
		          num[i] = num[j];
		          num[j] = temp;
	          }
         }
    for (i = 1; i <= n; i++) {
         if(num[i].b[0] != 'z' + 1)
	         printf("%s\n",num[i].b);
    }
	return 0;
}
