/*��Ŀ����

����һЩС�򣬴��������α��Ϊ1,2,3,...,n. �����ִ������ָ�1����2���� 
���У� 1 X Y��ʾ��С��X�ƶ���С��Y����ߣ� 2 X Y��ʾ��С��X�ƶ���С��Y�ұ�.
 ָ�֤�Ϸ�����X������Y�� ���磬��ʼ״̬1,2,3,4,5,6��С��ִ��1 1 4��,
 С��1���ƶ���С��4����ߣ���2,3,1,4,5,6�������ִ��2 3 5�����3�����Ƶ�5���ұߣ���2,1,4,5,3,6��
�����ʽ

��һ��Ϊһ������t��0<t<10������ʾ��������������ÿ�����������ĵ�һ��Ϊ��������n��1<n<=500000����m��0<m<100000���� 
n��ʾС��ĸ�����mΪָ������������m��ÿ��Ϊһ��ָ�

�����ʽ

Ϊÿ�����������������һ�У����������������У�ÿ�����ֺ����һ���ո� 


��������
2 
6 2 
1 1 4 
2 3 5 
5 1 
2 1 5 �������
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
