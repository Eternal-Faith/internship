#include<stdio.h>
int main(void){
	int n;
	char s[1];
	scanf("%d",&n);
	scanf("%s",s);
	int i;
	for(i=1;i<=n;i++){
		printf("%s",s);
	}
	printf("\n");
	int j;
	j=n;
	if(j%2==1)
	j++;
	j=j/2;
	j=j-2;
	for(i=1;i<=j;i++){
	printf("%s",s);
	int m;
	m=n-2;
	while(m--)
	printf(" ");	
	printf("%s\n",s);
	}
	for(i=1;i<=n;i++){
		printf("%s",s);
	}
	return 0;
}
