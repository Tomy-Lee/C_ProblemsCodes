/*---------程序填空，不要改变与输入输出有关的语句。
输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
输入日期(年、月、日)，输出它是该年的第几天。
要求定义与调用函数 day_of_year(year, month, day)，计算并返回year(年)、month(月)和day(日)对应的是该年的第几天，函数形参year、month和day的类型是int，函数类型也是int。
输入输出示例：括号内为说明
输入：
2         (repeat=2)
1981 3 1  (1981年3月1日)
2000 3 1  (2000年3月1日)
输出：
days of year: 60        (1981年3月1日是该年的第60天)
days of year: 61        (2000年3月1日是该年的第61天)*/
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
