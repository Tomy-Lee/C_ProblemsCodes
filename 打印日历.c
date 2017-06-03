//输入年份，本年第一天是周几，和要打印的月份，打印出这个月的日历
#include<stdio.h>
int main()
{
    int sh;
    int year,fd,month;
    printf("请按规格输入：输入年份，本年第一天是周几，和要打印的月份（2016 5 2）\n");
    scanf("%d %d %d",&year,&fd,&month);
    switch(month)
    {
        case 1:
            printf("January %d\n",year);
            break;
        case 2:
            printf("February %d\n",year);
            break;
        case 3:
            printf("March %d\n",year);
            break;
        case 4:
            printf("April %d\n",year);
            break;
        case 5:
            printf("May %d\n",year);
            break;
        case 6:
            printf("June %d\n",year);
            break;
        case 7:
            printf("July %d\n",year);
            break;
        case 8:
            printf("August %d\n",year);
            break;
        case 9:
            printf("September %d\n",year);
            break;
        case 10:
            printf("October %d\n",year);
            break;
        case 11:
            printf("November %d\n",year);
            break;
        case 12:
            printf("December %d\n",year);
            break;
    }
    int leap=0;
    int i;
    if((year%400==0)||(year%4==0&&year%100!=0))
    leap=1;
    int days=0;
    /*printf("%d",leap);*/
    for( i=1;i<month;i++)
    {
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
        days=days+31;
        if(i==4||i==6||i==9||i==11)
        days=days+30;
        if(i==2)
        days=days+leap+28;
    }
    printf("     Sun     Mon     Tue     Wed     Thu     Fri     Sat\n");
    int md=(fd+days)%7;
    /*printf("%d",md);*/
    switch(md)
    {
        case 1:
            printf("        ");
            break;
        case 2:
            printf("                ");
            break;
        case 3:
            printf("                        ");
            break;
        case 4:
            printf("                                ");
            break;
        case 5:
            printf("                                        ");
            break;
        case 6:
            printf("                                                ");
            break;
    }
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        int q=1+md;
        for( i=1;i<=31;i++)
        {
        printf("%8d",i);
        if(q%7==0)
        printf("\n");
        q++;    
        }
        sh=31+md;
    }
    if(month==4||month==6||month==9||month==11)
    {
        int q=1+md;
        for( i=1;i<=30;i++)
       {
        printf("%8d",i);
        if(q%7==0)
        printf("\n");
        q++;    
       }
       sh=md+30;
    }
    if(month==2&&leap==0)
    {
        int q=1+md;
      for( i=1;i<=28;i++)
       {
        printf("%8d",i);
        if(q%7==0)
        printf("\n");
        q++;    
        }
        sh=md+28;
    }
    if(month==2&&leap==1)
    {
        int q=1+md;
       for( i=1;i<=29;i++)
       {
        printf("%8d",i);
        if(q%7==0)
        printf("\n");
        q++;    
       }
       sh=md+29;
    }
    if(sh%7!=0)
    printf("\n");

return 0;   
} 
