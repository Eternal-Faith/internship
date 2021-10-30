#include<stdio.h>
int main(void){
     int n;
     scanf("%d",&n);
     int b,t,s,g;
     b=n/100;
     t=n%100;
     s=t/10;
     g=t%10;
     while(b--){
     printf("B");
     }
	 while(s--){
	 printf("S");
	 }
	 int i;
	 for(i=1;i<=g;i++){
	 printf("%d",i);
	 }
	 return 0;
}
