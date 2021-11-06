#include<stdio.h>

int main()
{
    //输入数据
    int n,i;
    scanf("%d",&n);
    int nums[10000];
    for(i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    //计算每个数字各位数字之和
    int sum[10000];
    int j;
    for(i=0;i<n;i++){
        for(j=0;j<4;j++){
        sum[i]+=nums[i]%10;
        nums[i]=nums[i]/10;
        }
     }
    //判断朋友数个数
    int k=0;
    int peng[10000];
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(sum[i]==sum[j])
                break;
            if(j==n-1){
                peng[k]=sum[i];
                k++;
            }
        }
    }
    peng[k]=sum[n-1];
    k++;
    
    //排序 (这个地方卡了一会儿，最后还是找出目标之后进行了替换)
    int t=0,temp;
    int pengx[10000]={0};
    for(j=0;j<k;j++){
        pengx[t]=peng[j];
    for(i=j+1;i<k;i++){
        if(pengx[t]>peng[i]){
        temp=pengx[t];
        pengx[t]=peng[i];
        peng[i]=temp;
             }
         }
      t++;
    }    
    //输出结果
    printf("%d\n",k);
    for(i=0;i<k;i++){
    printf("%d",pengx[i]);
    if(i!=k-1)
    printf(" ");
    }
    return 0;
}
