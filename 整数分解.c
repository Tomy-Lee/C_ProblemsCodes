#include<stdio.h>
#include<math.h>
int main() {
    unsigned int i, n, m, k=0;                                                       //k����Ƿ��н⣬n�洢�������ݣ�mΪn����ָ���
    scanf("%d", &n);
    m = sqrt(n + n);
    for(i = m; i >= 2; i--) {
        if( (n % i == 0) && (i%2) ) {                                               //�ɷֽ�Ϊ������
             k=1;                                                                   //����н�
             for (unsigned int j=(n/i-i/2); j <= (n / i + i / 2); j++) {            //���
                  printf("%d ", j);
                  }
             printf("\n");
        }
        else if( (n % i == i / 2) && ( (i+1) % 2) ) {                                //�ɷֽ�Ϊż����
             k=1;                                                                     //����н�
             for (unsigned int j=( (n-1) / i-(i/2-1) ); j <= ( (n-1) / i + i / 2); j++) {        //���
                  printf("%d ", j);
                 }
             printf("\n");
        }
   }
   if(k == 0)    printf("NONE\n");                                                 //�޷��ֽ�
   return 0;
}
