#include<stdio.h>
int main(void){
	//输入数据
	int n;
	scanf("%d",&n);
	int i,j;
	int arr[100001][2];
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	//计算每个学校的总分
	int sum[100001]={0};

		for(i=0;i<n;i++){
			    sum[arr[i][0]]+=arr[i][1];
	  }
	//sum数组中的第一个元素为0，第二个元素开始是有效值
	
	//下面比较哪个学校的总分最大
    int max=0;
    int k;
    for(j=1;j<=n;j++){
    if(max<=sum[j]){
    max=sum[j];
    k=j;}
    }
    printf("%d %d",k,max);
    return 0;
}
	//第一次上交四个测试中第四个超时
