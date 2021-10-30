#include <stdio.h>
int jdz(int x)
{
    if(x<0)
        return(-x);
    else
        return x;;
}
int main(void)
{   
    int a,b;
    int temp;
    int i,j;
    int x[100];
    do{
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&x[i]);
    }

    for(i=0;i<a-1;i++){
        for(j=i+1;j<a;j++)
        if(jdz(x[i])<jdz(x[j])){
            temp=x[i];
            x[i]=x[j];
            x[j]=temp;
        }

    }
    for(i=0;i<a;i++){
        printf("%d ",x[i]);
    }
    putchar('\n');
    } while(a!=0);
    return 0;

}
