#include<stdio.h>
int main(void)
{
	
	char n[128];
	int	sum=0;
	int i=0;
	scanf("%s",n);
	
	while(n[i]!='\0'){
		sum=sum+(n[i]-'0');
		i++;}
	
	
	int a=0;
	int b;
	int t[10];
	b=sum;
	while(b!=0){
	t[a]=b%10;
	a++;
	b=b/10;}


	char arr[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};	                 
	int j;
	for(j=a-1;j>=0;j--){
		if(j!=0)
		printf("%s ",arr[t[j]]);
		else
		printf("%s",arr[t[j]]);
	}
		
	return 0;
	
	
}
