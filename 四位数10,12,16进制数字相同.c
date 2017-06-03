#include <stdio.h>

int i;
int base_duo[4] = {1,12,144,1728};
int base_hex[4] = {1,16,256,4096};

//�õ�12���Ƶ�����֮��
int get_sum_duo(int num)
{
    int ex[4]={0},sum=0;
    for(i=3;i>=0;i--)
    {

        if(num>=base_duo[i])
        {
            num -= base_duo[i];
            ex[i]++;
            i++;
        }
    }
    for(i=0;i<4;i++)
    sum+=ex[i];
    return sum;
}

//�õ�16���Ƶ�����֮��
int get_sum_hex(int num)
{
    int ex[4]={0},sum=0;
    for(i=3;i>=0;i--)
    {
        if(num>=base_hex[i])
        {
            num -= base_hex[i];
            ex[i]++;
            i++;
        }
    }
    for(i=0;i<4;i++)
    sum+=ex[i];
    return sum;
}
//�õ�10����֮��
int get_sum(int num)
{
    int sum=0;
    while(num>0)
    {
        sum += num%10;
        num /=10;
    }
    return sum;
}

int main()
{
    int j,tem;
    for(j=2992;j<10000;j++)
    {
        tem = get_sum(j);
        if(get_sum_duo(j)==tem&&get_sum_hex(j)==tem)
        printf("%d\n",j);
    }
    return 0;
}
