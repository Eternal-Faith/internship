#include<stdio.h>
int main(void)
{
    int i;
    char N[1000];
    scanf("%s",N);
    int num[10]={0};
    while(N[i]){
        num[N[i]-'0']++;
        i++;
    }
     for(i=0;i<10;i++){
        if(num[i]!=0)
            printf("%d:%d\n",i,num[i]);
     }

     return 0;
}

//PTA上答案正确，但gcc上却是段错误，我看不出有什么差错，先就交这个吧
