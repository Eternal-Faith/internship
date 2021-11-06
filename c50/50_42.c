#include<stdio.h>
#include<string.h>
int main(void){
	int m;								//输入
	scanf("%d",&m);
	char key[100][55];
	int i,j,t;
	int sum[100]={0};
	for(i=0;i<m;i++)
		scanf("%s",key[i]);
	for(i=0;i<m;i++){					//判断&输出
		if(strlen(key[i])<8||strlen(key[i])>16){
			printf("NO\n");
			
			continue;}
		
		j=0;t=sum[i];
		while(key[i][j]!='\0'&&t==sum[i]){				//1		
		if(key[i][j]>='a'&&key[i][j]<='z'){
			sum[i]++;

			}
			j++;
		} 
		j=0;t=sum[i];		
		while(key[i][j]!='\0'&&t==sum[i]){				//2
		if(key[i][j]>='A'&&key[i][j]<='Z'){
			sum[i]++;
		
			}
			j++;
		} 		
		j=0;t=sum[i];
		while(key[i][j]&&t==sum[i]!='\0'){				//3					
		if(key[i][j]>='0'&&key[i][j]<='9'){
			sum[i]++;
		
			}
			j++;
		} 		
		j=0;t=sum[i];
		while(key[i][j]!='\0'&&t==sum[i]){				//4 ~!@#$%^ 126,33,64,35,36,37,94
		if(key[i][j]=='~'||key[i][j]=='!'||key[i][j]=='@'||key[i][j]=='#'||key[i][j]=='$'||key[i][j]=='%'||key[i][j]=='^'){
			sum[i]++;	
			}
			j++;
		} 		
		if(sum[i]>=3){
		printf("YES\n");}
		else
		printf("NO\n");
		
									//三组以上
	}									

	return 0;
}													
