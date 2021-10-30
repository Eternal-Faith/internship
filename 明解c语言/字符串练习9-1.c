#include<stdio.h>
int main(void)
{
    char str[]="ABC\0DEF";//null字符'\0'是字符串结束的标志

    printf("字符串str为\"%s\".\n",str);
    printf("字符串str为%s.\n",str);
return 0;

}
