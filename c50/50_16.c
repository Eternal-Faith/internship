#include<stdio.h>

int main(void)
{
    int n,i,j,a;
    scanf("%d",&n);
    char  x[6]="aeiou";
    int y[5]={0};
    char s[100];

    for(j=0;j<n;j++){
  //      scanf("%s",s);
  //     for(a=0;a<100;a++){
  //         if(s[a]==' ')
  //      s[a]=getchar();   }  
   
    
         i=0;
        while(scanf("%c",&s[i]),s[i]!='\n')i++;
        s[i]='\0';  //遇到换行停止输入，并且将换行替换为\0
         

        i=0;
        while(s[i]){
            if(s[i]==x[0])
                y[0]++;
            if(s[i]==x[1])
                y[1]++;
            if(s[i]==x[2])
                y[2]++;
            if(s[i]==x[3])
                y[3]++;
            if(s[i]==x[4])
                y[4]++;
            i++;
        }
        for(i=0;i<5;i++)
            printf("%c:%d\n",x[i],y[i]);
        for(i=0;i<5;i++)
            y[i]=0;

      //  i=0;
      //  while(s[i]){
      //  s[i]='\0';
      //  i++;                    //还原
      // }
    }
        return 0;


}
