#include<stdio.h>
int main(void)
{   
    int i,j,n,m;
    printf("2 ");
    n=1;
    for(i=3;i<=100;i++){
        for(j=2;j<i;j++){
            if(i%j==0)
                break;
            else if(j==i-1){
                printf("%d ",i);
                n=n+1;                
            }
        }
    if(n%5==0&&n!=m)
            putchar('\n');
            m=n;
    } 
        return 0;
}
//求素数问题不难，每五个数换行卡了半天...无语了
