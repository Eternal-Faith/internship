#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
	return(a>b)?a:b;
}
	int main(void){
	int T;
	scanf("%d",&T);
	int m,n,x,y;
	int i,j;
	int arr[1010][1010];
	while(T--){	
	scanf("%d%d%d%d",&m,&n,&x,&y);
	
	int sub=0;
	memset(arr,0,sizeof(arr));
	//输入二维数组
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
		scanf("%d",&arr[i][j]);
		arr[i][j]+=arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
		if(i>=x&&j>=y){
			sub=max(arr[i][j]-arr[i-x][j]-arr[i][j-y]+arr[i-x][j-y],sub);
		}
	  }
	}
	
	printf("%d\n",sub);
	}
	return 0;
}
//dp什么的抽时间再看看




	
