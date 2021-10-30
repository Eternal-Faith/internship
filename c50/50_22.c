#include<stdio.h>
int main(void)
{
    int c1,c2,x;
    scanf("%d%d",&c1,&c2);
    x=c2-c1;
    if(x%100>=50)
    x=x/100+1;
    else
    x=x/100;
    
    int h,m;
    int s;
    h=x/3600;
    m=(x%3600)/60;
    s=(x%60);

    printf("%02d:%02d:%02d",h,m,s);
    return 0;
}
