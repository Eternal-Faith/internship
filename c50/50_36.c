#include<stdio.h>
#include<string.h>
int main(void){
	int n,i,j;
	scanf("%d",&n);
	//输入数据
	char name[n][6];
	char birth[n][11];             //可以直接比较字符串的大小，不需要过来过去变
	for(i=0;i<n;i++){				 
	scanf("%s",name[i]);
	scanf("%s",birth[i]);
	}

	//进行判断
	//判断有效值个数
	int real=n;
	int wrong[n];
		j=0;
	char min[]="1814/09/06";
	char max[]="2014/09/06";	 //双引号里可以用09
	for(i=0;i<n;i++){
	if(strcmp(birth[i],min)<0||strcmp(birth[i],max)>0){
		real--;
		wrong[j]=i;
		j++;	}
	}
	printf("%d",real);
	//判断最值
	char Min[]="0000/00/00";
	char Max[]="9999/99/99";
	j=0;
	int k,l;
	for(i=0;i<n;i++){
	if(i==wrong[j]){
		j++;
		continue;
	}
	
	if(strcmp(birth[i],Max)<0){    //最年长的人日期最小，最小的人日期最大
		strcpy(Max,birth[i]);
		k=i;
		}
	if(strcmp(birth[i],Min)>0){
		strcpy(Min,birth[i]);
		l=i;
		}
	}
	if(real>0)
	printf(" %s %s",name[k],name[l]);
	return 0;
}
//大小写细节问题卡半天，太不应该了
