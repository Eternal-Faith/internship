#include<stdio.h>
int main(void)
{
    int i,j;
    for(j=3;j>0;j--){     
        for(i=1;i<=3-j;i++)
        putchar(' ');
        for(i=1;i<=2*j-1;i++)
        putchar('*');
        putchar('\n');
    }
        for(j=1;j<=2;j++){
        for(i=1;i<=2-j;i++)
        putchar(' ');
        for(i=1;i<=2*j+1;i++)
        putchar('*');
        putchar('\n');
    }
        return 0;
}



