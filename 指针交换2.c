#include<stdio.h> 
int main() { 
    int array[10];
    int i, j;
    int *x = 0, *y = 0, *z = 0;
	int max = -65536, min = 65535; 
    printf("������ʮ������:\n"); 
    x = (int*)array; 
    for(i = 0; i< 10; i++) { 
          scanf("%d", &j); 
          if (max < j) {
                 max = j; 
                 y = x + i; 
          }
          if (min > j) {
                 min = j; 
                 z = x + i; 
          }
          x[i] = j; 
    }                                        
    j = *z; 
    *z = *x; 
    *x = j;
    x += 9; 
    j = *y; 
    *y = *x; 
    *x = j; 
    printf("�������Ϊ��\n"); 
    for(i = 0; i < 10; i++) 
	     printf("%d ", array[i]); 
    return 0; 
}  
