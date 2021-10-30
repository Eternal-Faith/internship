#include<stdio.h>
int main(void)
{
    int a,b;
    printf("输入两门课的成绩：");
    scanf("%d%d",&a,&b);
    switch(a/60+b/60){
        case 0 :
        case 1 :puts("it is not pass."); break;
        case 2 :puts("it is pass");      break;
        default :puts("it is error.");   break;
        }
    return 0;
}
                

