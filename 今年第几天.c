/*---------������գ���Ҫ�ı�����������йص���䡣
����һ�������� repeat (0<repeat<10)���� repeat ���������㣺
��������(�ꡢ�¡���)��������Ǹ���ĵڼ��졣
Ҫ��������ú��� day_of_year(year, month, day)��
���㲢����year(��)��month(��)��day(��)��Ӧ���Ǹ���ĵڼ��죬�����β�year��month��day��������int����������Ҳ��int��
�������ʾ����������Ϊ˵��
���룺
2         (repeat=2)
1981 3 1  (1981��3��1��)
2000 3 1  (2000��3��1��)
�����
days of year: 60        (1981��3��1���Ǹ���ĵ�60��)
days of year: 61        (2000��3��1���Ǹ���ĵ�61��)


----------------------------------------------------------------------------------*/

#include <stdio.h>
int main( ) {
    int day, day_year, month, year;
    int repeat, ri;

    int day_of_year(int year, int month, int day);

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d%d", &year, &month, &day);
		
		day_year = day_of_year(year, month, day);
		
        printf("days of year: %d\n", day_year);
    }
}

int day_of_year(int year, int month, int day) {
	int i, day_year = 0;
	int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (((0 == year % 4)&&(0 != year %100))||(0 == year % 400))	a[2]=29;
	for (i = 1; i < month; i++)	day_year += a[i];
	day_year += day;
	return day_year;
}


