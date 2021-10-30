#include<stdio.h>
int main(void){
	int n;
	scanf("%d",&n);
	
	while(n--!=0){
	int i=0;
	int s=0;
	char arr[100];
	scanf("%s",arr);
	while(arr[i]){
		if(arr[i]>='0'&&arr[i]<='9')
		s++;
		i++;
	}
	printf("%d\n",s);
	i=0;
	s=0;
	}
	return 0;
}
