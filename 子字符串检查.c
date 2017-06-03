#include<string.h>
int indexOf(const char *s1, const char *s2) {
    int n=strlen(s1);
    int m=strlen(s2);
    int s=-1;
    if(n>m) return -1;
    else {
        for(int i=0; i<m; i++) {
            int l=0;
            if(s2[i]==s1[l]) {
                int k=i;
                s=i;
                for(l=0; l<n; l++) {
                    if(s1[l] != s2[k+l]) {
                        s=-1;
                        break;
                    }
                }
            }
            if(s != -1)  break;
        }
    }
    return s;
}
