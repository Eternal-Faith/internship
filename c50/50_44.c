#include<stdio.h>
#include<stdlib.h>
int main(void){
//输入数据
	int n,i,j;
	scanf("%d",&n);   						 //n为数据个数
	char arr[101][19];
	for(i=0;i<n;i++){
		scanf("%s",arr[i]);
		getchar();
		}
//检验前17位是否都位数字，且最后一位校验码计算正确
	int wrong[102]={-1};
	int k=1;
	int quan[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char jiao[13]="10X98765432";
	int s=0;
	char x;
	//判断是否都为数字
	for(j=0;j<n;j++){						
   			for(i=0;i<17;i++){						//判断前17位是否都位数字，最后一位可以在校验码中测
			if(arr[j][i]<'0'||arr[j][i]>'9'){
				wrong[k]=j;
				k++;
				continue;
			}
		}

			//判断校验码(加权)(x?)
			if(wrong[k-1]!=j){
   		for(i=0;i<17;i++){
   			if(arr[j][i]=='X')
   			s+=10*quan[i];
		    else
		    s+=(arr[j][i]-'0')*quan[i];}				//记住身份证中的X代表10
			
	   		s=s%11;
	   		x=jiao[s];
	   		if(x!=arr[j][17])	{	
	   			wrong[k]=j;
	   			k++;}
	   		s=0;
   		}
   		
	}

//输出错误号码
	for(i=1;i<k;i++){
	printf("%s",arr[wrong[i]]);
	if(i!=k-1)
	putchar('\n');
	}
	
	if(k==1)
	printf("All passed");
	return 0;
}
