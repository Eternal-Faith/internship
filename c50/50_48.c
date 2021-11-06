#include<stdio.h>
int Max(int x,int y,int z,int m,int n){
	n=3;   //n=1,2,3;对应输出 C，J，B
	if(x!=0)
		{m=x;n=1;}
	if(m<y)
		{m=y;n=2;}	
	if(m<z)
		{m=z;n=3;}
	if(n==1&&x==z&&z==y)
		n=3;
	if(n==1&&x==z)
		n=3;
	if(n==2&&y==z)
		n=3;
		return n;
}
int main(void){

	//输入数据
	int n;
	scanf("%d",&n);
	char x[300000][3];
	int i,j;
	for(i=0;i<n;i++){
	scanf(" %c %c",&x[i][0],&x[i][1]);
	}

	//进行判断并记录
 	int result[2][3]={0}; 		  //记录胜平负数据
 	int max[2][3]={0};			  //记录每个手势获胜次数
 	for(i=0;i<n;i++){
        if(x[i][0]==x[i][1]){ //平
        result[0][1]++;
        result[1][1]++;}
        else if(x[i][0]=='C'&&x[i][1]=='J'||x[i][0]=='J'&&x[i][1]=='B'||x[i][0]=='B'&&x[i][1]=='C')
        {result[0][0]++;	  	  //注意嵌套判断语句的合理应用(else if)
        result[1][2]++;
        if(x[i][0]=='C')
            max[0][0]++;
        if(x[i][0]=='J')
            max[0][1]++;
        if(x[i][0]=='B')
            max[0][2]++;
        }//甲胜乙负
        else{
        result[0][2]++;
        result[1][0]++;
        if(x[i][1]=='C')
            max[1][0]++;
        if(x[i][1]=='J')
            max[1][1]++;
        if(x[i][2]=='B')
            max[1][2]++;
        }//乙胜甲负
    }                   
    printf("%d %d %d\n",result[0][0],result[0][1],result[0][2]);
    printf("%d %d %d\n",result[1][0],result[1][1],result[1][2]);
    //判断每个的最大值，用判断语句，输出即可字母
    int zimu[2];
    int h,k;
    zimu[0]=Max( max[0][0], max[0][1] ,max[0][2],h,k);
    zimu[1]=Max( max[1][0], max[1][1] ,max[1][2],h,k);    
	switch(zimu[0])  {
	case 1:printf("C "); break;
	case 2:printf("J "); break;
	case 3:printf("B "); break;
	
 }
 	switch(zimu[1])  {
	case 1:putchar('C'); break;
	case 2:putchar('J'); break;
	case 3:putchar('B'); break;
}
return 0;
}
//单字符%c，且输入需要&符号
//字符串%s，且输入不需要&符号
//测试点五过不了满分20 18分 抽时间再看看
