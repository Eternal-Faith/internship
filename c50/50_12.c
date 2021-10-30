#include<stdio.h>
int main(void)
{   
    int x;
    int n=0;
    scanf("%d",&x);
   
    do{
    if(x%2==0)
        x=x/2;
    else 
        x=(3*x+1)/2;
    n+=1;
    }while(x!=1);
  
    printf("%d\n",n);
    return 0;

}
