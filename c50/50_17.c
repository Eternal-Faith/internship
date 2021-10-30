#include<stdio.h>
#include<math.h>
int main(void)
{
    int M,N;
    scanf("%d%d",&M,&N);
    int x[10001];
    int i,j,k;
    int tmp;
    x[0]=2;
    x[1]=3;
    k=2;
    for(i=4;i<=104729;i++){
       tmp=sqrt(i);
        for(j=2;j<=tmp;j++){
            if(i%j==0)
                break;
            else if(j==tmp){
                x[k]=i;
                k=k+1;
            }
        }
    }
    int n=1;
    for(i=M-1;i<N;i++){
    if(n%10==0&&n!=0&&n!=N-M+1){
        printf("%d",x[i]);
        putchar('\n');
        n++;
    }
    else if(i==N-1)
        printf("%d",x[i]);
    else{
        printf("%d ",x[i]);
        n++;
    }

        
    }
    
    return 0;
}


