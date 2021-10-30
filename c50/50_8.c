#include<stdio.h>
int main(void)
{
    int a,b,i,j;
    int max=0;
    int min=100;
    double sum=0;
    int x[100];
    double average;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&x[i]);
        if(x[i]>max){
            max=x[i];
        }
        if(x[i]<min){
            min=x[i];
        }
        sum=sum+x[i];
     }
    sum=sum-max-min;
    average=sum/(a-2);
    printf("%.2f",average);
    putchar('\n');
    return 0;
}

