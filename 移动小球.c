/*题目描述

你有一些小球，从左到右依次编号为1,2,3,...,n. 你可以执行两种指令（1或者2）。 
其中， 1 X Y表示把小球X移动到小球Y的左边， 2 X Y表示把小球X移动到小球Y右边.
 指令保证合法，即X不等于Y。 例如，初始状态1,2,3,4,5,6的小球执行1 1 4后,
 小球1被移动到小球4的左边，即2,3,1,4,5,6。如果再执行2 3 5，结点3将会移到5的右边，即2,1,4,5,3,6。
输入格式

第一行为一个整数t（0<t<10），表示测试用例个数。每个测试用例的第一行为两个整数n（1<n<=500000）和m（0<m<100000）， 
n表示小球的个数，m为指令条数，以下m行每行为一条指令。

输出格式

为每个测试用例单独输出一行，从左到右输出最后序列，每个数字后面跟一个空格。 


样例输入
2 
6 2 
1 1 4 
2 3 5 
5 1 
2 1 5 样例输出
2 1 4 5 3 6  
2 3 4 5 1  */
#include<iostream>
using namespace std;
int lefta[500100] = { 0 };
int righta[500100] = { 0 };
void link(int x, int y);
int main() {  
    int t;
    int n, m;
    int x, y;
    int side;
    int i;
    int ball;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (i = 0; i <= n; i++) {
            link(i, i + 1);   
        }
        while (m--) {
            cin >> side >> x >> y;
            link(lefta[x], righta[x]);
            if (side == 1) {
                link(lefta[y], x);
                link(x, y);
            }
            else {
                link(x, righta[y]);
                link(y, x);
            }
        }
        for (ball = righta[0]; ball != n + 1; ball = righta[ball]) {
            cout << ball << " ";
        }
        cout << endl;
    }
    return 0;

}

void link(int x, int y)
{
    righta[x] = y;
    lefta[y] = x;
}
