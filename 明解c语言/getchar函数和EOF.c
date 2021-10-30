#include<stdio.h>
int main(void)
{
    int i,ch;
    int cnt[10]={0};

    while((ch=getchar())!=EOF){
        cnt[ch-'0']++;                 //ch-'0'是字符编号间的运算，
                                       // 结果是编号对应的数值
                                       //即数字字符'n'-'0'后，就会得到整数n
        
    }

    for(i=0;i<10;i++)
        printf("'%d':%d\n",i,cnt[i]);
    return 0;
}
