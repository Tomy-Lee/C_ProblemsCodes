#include<stdio.h> 
void bubblesort(int *a,int len) {
     int i = 0;
     int j, t;
     for(i = 0; i < len; i++) {
         for(j = 0; j < len - i - 1; j++) {
             if(a[j] > a[j+1]) {
                 t = a[j];
                 a[j] = a[j+1];
                 a[j+1] = t;
            }
        }
    }
} 

int main(int argc, char *argv[]) {
    int a[10] = {0};
    int i;
    for(i = 0; i < 10; i++) {
    	scanf("%d", &a[i]);
    }
    bubblesort(a,10);
    for(i=0;i<10;i++) {
        printf("%d ",a[i]);
    }
    return 0;
}
