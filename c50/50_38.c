#include<stdio.h>
int main(void){
	int n,m;
	scanf("%d%d",&n,&m);
	int i;
	int full[100];
	//输入每道题的满分
	for(i=0;i<m;i++)
	scanf("%d",&full[i]);
	//输入每道题的正确答案
	int result[100];
	for(i=0;i<m;i++)
	scanf("%d",&result[i]);
	//输入每个人的分数
	int score[100][100];
	int j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			scanf("%d",&score[i][j]);
			}
	//计算每个同学的得分
	int mark[100]={0};
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(score[i][j]==result[j])
				mark[i]+=full[j];
				}
	}
	//输出结果
	for(i=0;i<n-1;i++)
	printf("%d\n",mark[i]);
	printf("%d",mark[n-1]);
	return 0;
}
