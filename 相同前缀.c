/*Write a function that returns the common prefix of two strings. 
For example, the common prefix of "distance" and "disjoint" is "dis". The header of the function is as follows:
char * prefix(const char * const s1, const char * const s2)
If the two strings have no common prefix, the function returns an empty string.*/ 
#include<stdio.h>
#include<string.h>
char str[100];
char * prefix(const char * const s1, const char * const s2) {
    int n, m;
    n = strlen(s1);
    m = strlen(s2);
    int i = 0;
    int a;
    while(s1[i]==s2[i]&&i < n &&i < m) {
         i+=1;
         }
    for(a = 0; a < i; a++) {
         str[a] = s1[a];
         }
    str[i] = '\0';
    return str;
}     
