#include<stdio.h>
int main(void)
{
    int n,m;
    while(scanf("%d%d",&n,&m) !=EOF){

    int i,j;
    int x[100000];
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
   
    if(m==0&&n==0){
        putchar('\n');
        break;}
    if(n<m){
        for(i=0;i<n;i++)
            if(i!=n-1)
                printf("%d ",x[i]);
            else
                printf("%d\n",x[i]);
            }
        
        else{
        

    int max[10];
    int max1=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        if(max1<x[j])
            max1=x[j];
        }
    if(i!=m-1)
    printf("%d ",max1);
    else
    printf("%d\n",max1);
    for(j=0;j<n;j++){
        if(max1==x[j])
            x[j]=-100000;
    }
        max1=-10000;
    }
    
        }
        }
   
    return 0;
}
