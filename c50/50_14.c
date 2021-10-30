#include<stdio.h>
int main(void)
{
    int n,i,k,temp;
    int x[100];
    int min=1000000;
     while(scanf("%d",&n) !=EOF){
         for(i=0;i<n;i++){
            scanf("%d",&x[i]);
         }
         temp=x[0];
         for(i=0;i<n;i++){
            if(min>x[i]){
                min=x[i];
                k=i;
            }
         }
        x[0]=min;
        x[k]=temp;
         
        
         for(i=0;i<n;i++)
             if(i!=n-1)
             printf("%d ",x[i]);
             else
             printf("%d\n",x[i]);
            
         min=1000000;
     } 
    return 0;
}
