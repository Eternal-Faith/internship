#include<stdio.h>
int main(void)
{   int a,b,c;
    printf("请输入三个实数：");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b<c||a+c<b||b+c<a)
       printf("0\n");
     else if(a==b&&b==c)
       printf("1\n");
     else if(a==b||b==c||a==c)
       printf("2\n");
     else
       printf("3\n");
     return 0;
      
}
