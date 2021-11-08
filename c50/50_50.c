#include<stdio.h>
#include<stdlib.h>
int main(void){
	int m,n,tol;
	scanf("%d%d%d",&m,&n,&tol);	//m列n行
	int f[1000][1000];
	int w[1000][2];		//储存坐标
	int i,j;
	for(i=0;i<n;i++){
	for(j=0;j<m;j++)
		scanf("%d",&f[i][j]);		
	}
	
	//直接判断阈值	
	long x=0;											//记录个数
	long k=0;
	long result[1000];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){			
			if(i-1>=0){									//上面有值
				if(abs(f[i][j]-f[i-1][j])<=tol)
					continue;
					}
			if(i+1<n){									//下面有值
				if(abs(f[i][j]-f[i+1][j])<=tol)
					continue;
					}
			if(j-1>=0){									//左面有值
				if(abs(f[i][j]-f[i][j-1])<=tol)
					continue;
					}
			if(j+1<m){									//右面有值
				if(abs(f[i][j]-f[i][j+1])<=tol)
					continue;
					}
			
			if(i-1>=0&&j-1>=0){									//左上有值
				if(abs(f[i][j]-f[i-1][j-1])<=tol)
					continue;
					}
			if(i-1>=0&&j+1<m){									//右上有值
				if(abs(f[i][j]-f[i-1][j+1])<=tol)
					continue;
					}
			if(i-1>=0&&j+1<m){									//左下有值
				if(abs(f[i][j]-f[i-1][j+1])<=tol)
					continue;
					}
			if(i+1<n&&j+1<m){									//右下有值
				if(abs(f[i][j]-f[i+1][j+1])<=tol)
					continue;
					}
		w[k][0]=i+1; w[k][1]=j+1;
		result[k]=f[i][j];	
		x++;
		k++;
				
			}
	}
	long q;
	int p=0;
	k=0;
					
	for(j=0;j<x;j++){
	for(i=0;i<x;i++){
		if(i!=j){											//查重
		if(result[j]==result[i])
			break;
			k++;
			}
		if(i==x-1){
			q=result[j];
			
			p++;
			}
	}
	}
	x=p;
	if(x>1)
	printf("Not Unique");
	if(x==0)
	printf("Not Exist");
	if(x==1)
	printf("(%d, %d): %ld",w[k][1],w[k][0],q);
	

	return 0;
}
//6个测试点，第三个有点问题
