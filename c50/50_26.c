#include<stdio.h>
int main(void)
{
	int a,b;
	int i;
	int temp;
	while(scanf("%d%d",&a,&b)!=EOF){
	
	if(a<b){
	temp=a;
	a=b;
	b=temp;}
	
	for(i=a;;i++){
		if(i%a==0&&i%b==0){
			printf("%d\n",i);
			break;}
	}
	}
	return 0; 

}
