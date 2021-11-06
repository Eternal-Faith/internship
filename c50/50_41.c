#include<stdio.h>

int main(void){
	char x[1001];
	scanf("%[^\n]",x);						//输入空格键才会结束输入!!
	int i=0;
	int sum[26]={0};
	while(x[i]){							//判断字符是否为null
	if(x[i]>='A'&&x[i]<='Z'){				//A=65,Z=90,a=97,z=122
			sum[x[i]-'A']++;
		}
	if(x[i]>='a'&&x[i]<='z'){				
			sum[x[i]-'a']++;
		}
		i++;				
	}		
	
	int max=0;
	int k=0;
	for(i=0;i<26;i++){						//比较
		if(sum[i]>max){
			max=sum[i];
			k=i;
	    }  					
	}				
	char m[]="abcdefghijklmnopqrstuvwxyz";
    printf("%c %d",m[k],max);										    //输出
	return 0;	
}


