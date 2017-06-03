#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *p, const void *q) {
 return *(char *)q - *(char *)p;
}

int main() {
    char s[100];
    int t;
    while(scanf("%s", s)==1) {
         t = strlen(s);
         qsort(s, t, sizeof(char), cmp);
         puts(s);
    }
}
