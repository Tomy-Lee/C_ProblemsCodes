/*A prime number is a natural number which has exactly two distinct natural number divisors: 1 and itself. 
The first prime number is 2. Can you write a program that computes the nth prime number, given a number n <= 10000?

输入格式
The input contains just one number which is the number n as described above.
The maximum value of n is 10000.

输出格式
The output consists of a single line with an integer that is the nth prime number.

样例输入
30
样例输出
113
*/
#include <stdio.h>  
#include <math.h>       
int IsPrime (int x) {
    int i;
    if (x <= 1)     
        return 0;
    else {  
        for (i = 2; i <= (int)sqrt(x); i++)
            if ((x % i) == 0)  
                return 0;
        return 1;
    }  
}  
  
int main () {  
    int n, i;  
    scanf("%d", &n);
    while (n>0) {  
        for (i = 2; i <= 100000000; i++) {  
            if (IsPrime(i))  
                n--;  
            if (n == 0) {  
                printf("%d\n", i);  
                break;  
            }  
        }  
    }  
    return 0;  
}    
