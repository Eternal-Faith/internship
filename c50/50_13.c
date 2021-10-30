#include<stdio.h>
int main(void)
{
    int x,a,b,c,i;
    scanf("%d",&x);
    
    for(i=1;i<=x;i++){
        scanf("%d%d%d",&a,&b,&c);
        if(a+b>c)
            printf("Case #%d: true",i);
        else
            printf("Case #%d: false",i);
    }
    //题目说结尾无空行，我就把这里的空行删了。。。。    
    return 0;
}

