#include<stdio.h>
int main(void){
	int n;
	int i,j;
	while(scanf("%d",&n)){
	if(n==0)
	return 0;
	int income[100];
	//输入每个老师的工资
	for(i=0;i<n;i++)
	scanf("%d",&income[i]);
	//计算人命币张数
	int q,w,e,r,t,y;
	int num=0;
	for(i=0;i<n;i++){
	q=income[i]/100;
	w=(income[i]%100)/50;
	e=(income[i]%50)/10;
	r=(income[i]%10)/5;
	t=(income[i]%5)/2;
	if((income[i]%5)%2==1)
	y=1;
	else
	y=0;
	num=num+q+w+e+r+t+y;
	}
	printf("%d\n",num);
	}
	return 0;
}
