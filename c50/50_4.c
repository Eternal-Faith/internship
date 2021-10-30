#include<stdio.h>
int main(void)
{
    int a,b,c,temp;
    printf("请输入两个数：");
    scanf("%d%d",&a,&b);
    
    if(a<b){
        temp=a;
        a=b;
        b=temp;
    }//让a为较大的数
   
    
    do{
    c=a%b; 
    a=b;
    b=c;
    }while (c!=0);
     
    printf("这两个数的最大公约数为：%d\n",a);
    return 0;
}
