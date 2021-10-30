#include<stdio.h>
#define swap(type,a,b) ((a)=(a)+(b),(b)=(a)-(b),(a)=(a)-(b))
int main(void)
{
    int a,b;
    scanf("%d%d,&a,&b");
    printf("%d,%d",swap(int,a,b));
    return 0;

}
