#include<stdio.h>
int main(void)
{
    int a,b,i,j,n,p;
    int x[100];
    int y[100];
    while(scanf("%d",&a) !=EOF){ 
    for(i=0;i<a;i++){
        scanf("%d",&x[i]);
    }
    p=1;
    for(i=0;i<a;i++){
        if(x[i]%2!=0){
            p=x[i]*p;
        }

    }
        printf("%d ",p);
    putchar('\n');
    }
    return 0;
}

