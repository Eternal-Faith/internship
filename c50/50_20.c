#include<stdio.h>
#include<math.h>
int main(void)
{
    double pow(double x,double y);
    int m,n;
    int i;
    double j;
    int x[100];
    double sum[100]={0};
    scanf("%d",&m);
    for(i=0;i<m;i++)
        scanf("%d",&x[i]);
    for(i=0;i<m;i++){
    for(j=1;j<=x[i];j++)
        sum[i]=sum[i]+(1/j)*(pow (-1,j-1));
    printf("%.2f\n",sum[i]);
    }
    return 0;
}
