#include<stdio.h>
#define n 5
int main(void)
{
    int i,t;
    char s[n][128];

    for(i=0;i<n;i++)
    {
        printf("s[%d] :",i);
        scanf("%s",s[i]);
        if(strcmp(s[i],"$$$$$")==0){
            t=i;
            break;
        }
    }
        
    for(i=0;i<t;i++)
    {
        printf("s[%d]=\"%s\"\n",i,s[i]);
    }
    return 0;
}
