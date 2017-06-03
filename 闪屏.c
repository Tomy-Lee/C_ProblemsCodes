#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<process.h>
#include<time.h>
void timeset(void *p) {
    int i = 0;
    while(1) {
        i++;
        char str[100] = {0};
        sprintf(str, "title 当前时间第%d秒", i);
        system(str);
        Sleep(1000);
    }
}
void colorall(void *p) {
    time_t ts;
    unsigned int num = time(&ts);
    srand(num);
    for(;;) {
        int num1 = rand() % 16;
        Sleep(10);
        int num2 = rand() % 16;
        char str[50];
        sprintf(str, "color %x%x", num1, num2);
        system(str);
    }
}
int main() {
    _beginthread(timeset, 0, NULL);
    _beginthread(colorall, 0, NULL);
    system("pause");
}
