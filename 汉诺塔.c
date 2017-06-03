/*汉诺塔：汉诺塔（又称河内塔）问题是源于印度一个古老传说的益智玩具。大梵天创造世界的时候做了三根金刚石柱子，
在一根柱子上从下往上按照大小顺序摞着64片黄金圆盘。大梵天命令婆罗门把圆盘从下面开始按大小顺序重新摆放在另一根柱子上。
并且规定，在小圆盘上不能放大圆盘，在三根柱子之间一次只能移动一个圆盘
输入格式
给出第一根柱子的圆盘个数N(N <= 20)，你要做的就是找出最快将圆盘全部移到第三根柱子的方法，并将方法输出出来。

*/
#include <stdio.h>
char a = '1', b = '2', c = '3';
void move(char a, char b) {
     printf("%d -> %d\n", a-48, b-48);
}
void hannuota(int n, char a, char b, char c) {
     if (n == 1)
        move(a, c);
     else {
        hannuota(n - 1,a, c, b);
        move(a,c);
        hannuota(n - 1, b, a, c);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    hannuota(n, a, b, c);
    return 0;
}      
