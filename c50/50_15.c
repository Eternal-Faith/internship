#include<stdio.h>
int main(void)
{
    int n,i;
    int x[10000];
    while(scanf("%d",&n)!=EOF){
       for(i=0;i<n;i++)
        scanf("%d",&x[i]);
       for(i=0;i<n;i++) 
        printf("%c",x[i]);
       
    }
    return 0;

}
