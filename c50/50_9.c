#include<stdio.h>
int main(void)
{
    int i,a,b,c;
    int w=0;
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d/%d/%d",&a,&b,&c);
    for(i=0;i<b-1;i++){
        w=w+month[i];
    }
    w=w+c;
    if(((a%4==0&&a%100!=0)||a%400==0)&&b>2)
    w=w+1;
    printf("%d\n",w);
    return 0;
}
