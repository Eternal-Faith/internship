#include<stdio.h>
enum month {january = 1,febuary,march,april,may,june,july,august,september,october,november,december};
//定义枚举类型（记住：是定义了一个类型;month可有可无）
int main(void)
{
    //用基本数据类型声明变量，然后对变量赋值
    int  x,y,z;
    x=10;
    y=20;
    z=30;
    //用枚举类型声明变量，再对枚举类型变量赋值
   enum month  jan,feb,mar;

   jan = january;
   feb = febuary;
   mar = march;
    
   printf("%d %d %d \n",jan,feb,mar);

    return 0;

}

//枚举类型是预处理指令#define的替代
