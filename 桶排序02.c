#include<stdio.h>
int a[1001]={0};
int main() {
	int n, t, i, m;
	scanf("%d", &n);
	while(n--) {
		scanf("%d", &t);
		int max=0;
		for(i=0; i<t; i++) {
		    scanf("%d", &m);
		    a[m]++;
		    if(m>max) max=m;
	    }
	    for(i=0; i<=max; i++) {
	    	if(a[i]) {
	    		printf("%d\n", i);
	    		a[i]--;
	    	}
	    }  
	}
	return 0;	
}
