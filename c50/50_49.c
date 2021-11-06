#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(void){
	char x[81];
	char y[81];
	scanf("%s%s",x,y);
	int i=0;
	while(x[i]){						//把字符都转成大写
		x[i]=toupper(x[i]);
		i++;
	}
	i=0;
	while(y[i]){
		y[i]=toupper(y[i]);
		i++;
	}

	int len1,len2;
	len1=strlen(y);
	len2=strlen(x);
	int j;
	int k=0;							    //找出出错字符，并保存
	char z[81];
	for(i=0;i<len2;i++){
		for(j=0;j<len1;j++){
			if(x[i]==y[j])
				break;
			else if(j==len1-1){
				z[k]=x[i];
				k++;
				}
		}
		
	}	
	z[k]='\0';	
	char result[81];
	int m=1;
	result[0]=z[0];
	for(j=1;j<k;j++){							//删除重复的
	for(i=j-1;i>=0;i--){
		if(z[j]==z[i])
			break;
		if(i==0){
			result[m]=z[j];					//7TIITT
			m++;
			}
	
		}
	}		
	result[m]='\0';
	printf("%s",result);
	
return 0;
}
