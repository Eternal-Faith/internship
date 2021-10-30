#include<stdio.h>
int main(void){
	
	int n;
	int i,j;
	int x;
	while(scanf("%d",&n)!=0){
	if(n!=0){
		int a[1000]={0};
	
		a[1]=0;
		a[2]=2;
		x=1;
		for(i=3;i<=1000;i++){
		
		x=x*2;
		x=x%10000;
	
		a[i]=(a[i-2]*2+x-a[i-2])%10000;
		if(i==n)
		break;
		
		}
			printf("%d\n",a[n]);
	
	}
	else
	break;	
	}
	
	return 0;	
}
//我将一千个示例都试了一遍，和答案对比没问题，而且格式也没什么问题，但测试系统报错，花了很多时间，我觉得我的没问题
