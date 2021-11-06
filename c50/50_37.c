#include<stdio.h>
int main(void){
	//输入数据
	int n,i;
	scanf("%d",&n);
	char x[1000][17];   	//准考证号
	int  y[1000];			//试机号
	int  z[1000];			//考试号	
	for(i=0;i<n;i++){
		scanf("%s",x[i]);	
		scanf("%d",&y[i]);
		scanf("%d",&z[i]);
	}
	//进行检索
	int m,j;
	scanf("%d",&m);
	int w[1000];
	
	for(i=0;i<m;i++){
		scanf("%d",&w[i]);	
	}
	for(j=0;j<m;j++){
	for(i=0;i<n;i++){
		if(y[i]==w[j]){
			printf("%s %d",x[i],z[i]);	
			if(j!=m-1)
			putchar('\n');		
			break;
			}		
	}
	}
	return 0;
}
