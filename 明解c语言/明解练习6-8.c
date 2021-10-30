#include<stdio.h>
int min_of(const int v[], int n) //设计一个函数，返回一个数组中的最小值
{ 
    int i;
    int min = v[0];
    
    for(i = 1; i < n; i++){
        if(v[i] < min)
           min = v[i];
    }
        return min;
}

//试用题目中要求创建的函数
int main(void)
{
    int i;
    int tensu[5];
    printf("输入五个数：");
    for(i = 0;i < 5; i++)
        scanf("%d",&tensu[i]);
    printf("这组数中的最小值是:%d\n", min_of(tensu, 5));

}
