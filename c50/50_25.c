#include<stdio.h>
#include<math.h>
int main(void){
    double r1,p1,r2,p2;
    scanf("%lf%lf%lf%lf",&r1,&p1,&r2,&p2);
	double a,b;
	a=r1*r2*cos(p1+p2);
	b=r1*r2*sin(p1+p2);
	 if(a<0&&a> -0.005)
	a=0;
	if(b<0&&b> -0.005)
	b=0;
	printf("%.2f%+.2fi",a,b);

	return 0;
}
