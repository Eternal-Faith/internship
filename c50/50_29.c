#include<stdio.h>
int main(void){
	int N;
	int x,y;
	scanf("%d",&N);
	x=N;
	y=N;
	int n[10];
	int i=0;
	while(N--!=0){
		scanf("%d",&n[i]);
		i++;
	}	
	
	
	int sum=0;
	i=0;
	while(x--!=0){
		sum=sum+n[i]*10*(y-1)+n[i]*(y-1);
		i++;
	}
	printf("%d",sum);
	return 0;
}
