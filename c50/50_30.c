#include<stdio.h>
#include<math.h>
int main(void){
	
	char x[10];
	char y[10];
	int a;
	int b;
	scanf("%s",x);
	scanf("%d",&a);
	scanf("%s",y);
	scanf("%d",&b);

	int i;
	double m,n;
	i=0;
	m=0;
	n=0;
	while(x[i]){
		if((x[i]-'0')==a)
			m++;
			i++;	
	}
	i=0;
	while(y[i]){
		if((y[i]-'0')==b)
			n++;
			i++;	
	}
	
	int sum=0;
	int p=0;
	int q=0;
	double c,d;
	while(m--!=0){    //这一行中m是减前的值
		c=pow(10,m); 
		p=p+a*c;
	}
		while(n--!=0){
		d=pow(10,n);
		q=q+b*d;
	}
    sum=p+q;
 	printf("%d",sum);
 	
	return 0;


}
