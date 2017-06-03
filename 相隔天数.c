#include<stdio.h>
int leapyear(int);
int yeardays(int);
int days(int, int, int);
int leapyear(int year) {
    return((year%4==0 && year%100!=0) || year%400==0)? 1:0;
}
int yeardays(int year) {
    return leapyear(year)? 366:365;
}
int days(int year, int month, int day) {
    int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int i;
    if(leapyear(year) && month>2)
       day++;
    for(i=1; i<month; i++) {
        day += mon[i];
    }
    return day;
}
int main() {
    int year1, year2, month1, month2, day1, day2;
    int x, i, sum=0;
    printf("请输入第一个日期，格式为（**** ** **） ："); 
    scanf("%d%d%d", &year1, &month1, &day1);
    printf("请输入第二个日期，格式为（**** ** **） ："); 
    scanf("%d%d%d", &year2, &month2, &day2);
    if(year1==year2) {
        x = days(year2,month2,day2)-days(year1,month1,day1);
    }
    else {
      for(i=year1+1; i<year2; i++) {
          sum += yeardays(i);
      }
      x = sum + days(year2, month2, day2) + yeardays(year1) - days(year1, month1, day1);
    }
    if(x==1) printf("相隔日期 ： 1 day\n");
    else printf("相隔日期 ：%d days\n", x);
    system("pause");
    return 0;
}
