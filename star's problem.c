/*题目描述
Star thinks Joe's problem "Sum" is too young too simple, so he added two operations.

Give a sequence of N numbers and M operations, there are three types of operations:
Operation 1: Change all the number to its opposite number;
Operation 2: Add an integer X to all the numbers;
Operation 3: Print the sum of the subsequence in [L, R].
Now it's your job, gool luck.
输入格式
The first line is two integers N and M (0 < N, M <= 100000), means the length of sequence and the number of operations.
The second line has N integers, indicate the sequence.
The follow M lines shows the operations:
"1"         Operation 1
"2 X"       Operation 2, X is an integer
"3 L R"     Operation 3, L and R is integer
Numbers in sequence and X in Operation 2 has a absolute value less or equal to 1000000.
输出格式
The result of Operation 3, one per line.

*/
#include<stdio.h>
long long list[100001];
int main() {
    int n, m;
    long long add = 0;
    int sign = 1;
    int i,j;
    int s, e;
    scanf("%d%d", &n, &m);
    for(i = 1; i <= n; i ++) {
        scanf("%lld", &list[i]);
        list[i]+= list[i-1];
    }
    for(i = 0; i < m; i ++) {
        scanf("%d", &j);
        if(j == 1) {
            sign *= -1;
            add *= -1;
        }
        else if(j == 2) {
            scanf("%d", &s);
            add += s;
        }
        else if(j == 3) {
            scanf("%d%d",&s, &e);
            printf("%lld\n",(list[e]-list[s-1])*sign + add*(e-s+1));
        }
    }
    return 0;
}    
