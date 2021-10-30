#include<stdio.h>
#include<math.h>
int main(void)
{
    int N,i;
    int x[10000][2];
    int y[10000];
    scanf("%d",&N);

    for(i=0;i<N;i++){
        scanf("%d%d",&x[i][0],&x[i][1]);
        y[i]=x[i][0]*x[i][0]+x[i][1]*x[i][1];
    }

    double max=y[0];
    for(i=0;i<N;i++){
        if(max<y[i])
            max=y[i];
    }
    double result;
    result=sqrt(max);
    printf("%.2f",result);
    return 0;
}
