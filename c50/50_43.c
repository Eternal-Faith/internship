//输入个二维数组，输入一个区间，把在该区间内的值用指定元素代替，最后在保留三位输出
#include<stdio.h>
int main(void){
		int m,n,a,b,t;
		int i,j;
		int x[501][501];
		scanf("%d%d%d%d%d",&m,&n,&a,&b,&t);
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				scanf("%d",&x[i][j]);
			}
		}
											  //判断					
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				if(x[i][j]>=a&&x[i][j]<=b)
					x[i][j]=t;
			}
		}
											  //输出				
	   	for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				printf("%03d",x[i][j]);
				if(j!=n-1)
				putchar(' ');
				if(i!=m-1&&j==n-1)
				putchar('\n');
			}
		}								
		



	return 0;
}
