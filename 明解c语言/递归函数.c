//练习8-8
#include<stdio.h>
int gcd(int x, int y)
{
    int temp;
    if(x<y){
        temp=x;
        x=y;
        y=temp;
    }                   //令x为大值，y为小值
    int m;
    m=x%y;
    if(m!=0)
        return gcd(y,m);
    else
        return y;
}
int main(void)
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",gcd(a,b));
    return 0;
    
}
//我觉得递归函数就是某个函数的嵌套使用（调用和该函数同样的函数）
