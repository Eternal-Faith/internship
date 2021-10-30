#include<stdio.h>
#define diff(x,y) ((x) - (y))

int main(void)
{
    int x,y;
    printf("输入两个人实数：");
    scanf("%d%d", &x, &y);
    printf("这两个数的差是：%d \n", diff(x,y));
    return 0;

}
