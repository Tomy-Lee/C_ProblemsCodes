/*
N couples are standing in a circle, numbered consecutively clockwise from 1 to 2N. Husband and wife do not always stand 
together. We remove the couples who stand together until the circle is empty or we can't remove a couple any more.

Can we remove all the couples out of the circle?


输入格式

There may be several test cases in the input file. In each case, the first line is an integer N(1 <= N <= 100000)----
the number of couples. In the following N lines, each line contains two integers ---- the numbers of each couple.
N = 0 indicates the end of the input.


输出格式

Output "Yes" if we can remove all the couples out of the circle. Otherwise, output "No".


样例输入
4
1 4
2 3
5 6
7 8

2
1 3
2 4

0样例输出
Yes
No*/
#include <stdio.h>
int stack[200010], couple[200010];
int main() {
    while (1) {
        int N;
        scanf("%d", &N);
        if (N == 0)
        break;
        int i;
        for (i = 0; i < N; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        couple[a] = b;
        couple[b] = a;
    }
        int c = 1;
        stack[c++] = couple[1];
        for (i = 2; i <= 2 * N; i++) {
            if (stack[c - 1] == i)
            stack[--c] = -1;
            else
            stack[c++] = couple[i];
        }
        if (stack[1] == -1)
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}   
