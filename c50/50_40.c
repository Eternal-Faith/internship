#include<stdio.h>
int main(void){
	//输入数据
	int m,k;			//初始筹码数，游戏次数
	scanf("%d%d",&m,&k);	
	int n1[100],b[100],t[100],n2[100];
	int i;
	for(i=0;i<k;i++){
	scanf("%d%d%d%d",&n1[i],&b[i],&t[i],&n2[i]);
	}
	//进行判断并输出
	for(i=0;i<k;i++){
		if(t[i]>m) 
			printf("Not enough tokens.  Total = %d.",m);
			else if((n1[i]>n2[i])&&b[i]==1||(n1[i]<n2[i])&&b[i]==0){
				m=m-t[i];
				printf("Lose %d.  Total = %d.",t[i],m);	
				}
				else if((n1[i]>n2[i])&&b[i]==0||(n1[i]<n2[i])&&b[i]==1){
					m=m+t[i];
					printf("Win %d!  Total = %d.",t[i],m);
				}			
				if(i!=k-1)
			putchar('\n');
			 if(m<=0){
				printf("Game Over.");
				break;}
			}
	return 0;
	
}	
