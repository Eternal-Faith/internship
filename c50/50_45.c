#include<stdio.h>
int main(void){
	//写入初始数据
	char arr[101];			//注意比案例多一个数，以防万一
	while(scanf("%s",arr) !=EOF){
	if(arr[0]=='E')
	return 0;
	//判断各元素个数
	int a,b,c;
	a=0;
	b=0;
	c=0;
	int i=0;
	while(arr[i]){
		if(arr[i]=='Z')
			a++;
		if(arr[i]=='O')
			b++;
		if(arr[i]=='J')
			c++;		
			i++;
	}
	//利用判断语句进行输出
	while(1){
	if (a!=0){
	printf("Z");
	a--;}
	if(b!=0){
	printf("O");
	b--;}
	if(c!=0){
	printf("J");
	c--;}
	if(a==0&&b==0&&c==0)
	break;}
	putchar('\n');
	}
	return 0;
}	
//数组多了一个数，就AC了
