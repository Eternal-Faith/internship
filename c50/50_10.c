#include<stdio.h>
int main(void)
{
    int n,m;
    int i,j;
    int score[100][100];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        scanf("%d",&score[i][j]);
    }
    //求每个学生的平均成绩
    double average1[100];
    double sum1[100];
    for(i=0;i<n;i++){
    for(j=0;j<m;j++)
        sum1[i]=score[i][j]+sum1[i];
    }
    
    for(i=0;i<n;i++){
        average1[i]=sum1[i]/n;
        printf("%.2f ",average1[i]);
    }
    putchar('\n');
    //求每门课的平均成绩
    double average2[100];
    double sum2[100];
    for(j=0;j<m;j++){
    for(i=0;i<n;i++)
        sum2[j]=score[i][j]+sum2[j];
    }

    for(j=0;j<m;j++){
        average2[j]=sum2[j]/m;
        printf("%.2f ",average2[j]);
    }
    putchar('\n');
    //求各科成绩均大于等于平均成绩的学生数量
    int x[100]={0};
    int sum3=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        if(score[i][j]>=average2[j])
            x[i]=x[i]+1;
    }
       
        if(x[i]==2)
            sum3=sum3+1;
    }
    printf("%d",sum3);
    putchar('\n');
}
