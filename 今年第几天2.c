/*---------������գ���Ҫ�ı�����������йص���䡣
����һ�������� repeat (0<repeat<10)���� repeat ���������㣺
��������(�ꡢ�¡���)��������Ǹ���ĵڼ��졣
Ҫ��������ú��� day_of_year(year, month, day)�����㲢����year(��)��month(��)��day(��)��Ӧ���Ǹ���ĵڼ��죬�����β�year��month��day��������int����������Ҳ��int��
�������ʾ����������Ϊ˵��
���룺
2         (repeat=2)
1981 3 1  (1981��3��1��)
2000 3 1  (2000��3��1��)
�����
days of year: 60        (1981��3��1���Ǹ���ĵ�60��)
days of year: 61        (2000��3��1���Ǹ���ĵ�61��)*/
#include<stdio.h>
int runnian(int n) {
    if(n%100==0){
        if(n%400==0) return 1;
        else return 0;
    }
    else {
        if(n%4==0) return 1;
        else return 0;
    }
}
int tianshu(int year, int month, int day) {
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(runnian(year)==1) a[1]={29};
    int i, sum=0;
    for(i=0;i<month-1;i++) {
        sum+=a[i];
    }
    day+=sum;
    return day;
    
}
int main() {
    int repeat, year, month, day;
    scanf("%d", &repeat);
    while(repeat--) {
        scanf("%d%d%d", &year, &month, &day);
        int c=tianshu( year, month,  day);
        printf("day of year :%d\n", c );
    }
    return 0;
}
