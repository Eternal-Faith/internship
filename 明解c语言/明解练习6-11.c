#include<stdio.h>
int search_idx(const int v[], int idx[], int key, int n)
{
    int i,j,m;
    j=0;
    for(i = 0;i < n; i++){
        if(v[i]==key){
            j=j+1;
            for(m = 0;m < n ;m++)
                idx[m] = i;
        }
    }
    return j;
}

int main(void)
{
    int k,i;
    int x[7];
    int idx[7];
    for(i = 0;i < 7; i++)
        scanf("%d",&x[i]);
    scanf("%d",&k);
    printf("%d",search_idx(x, idx, k, 7));
    
    return 0;
  
}
//跑得动但并没有用哨兵查找法
