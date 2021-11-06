#include<stdio.h>
int main(void){
	int i,t,n;
	scanf("%d",&t);
	double a[100];
	while(t--){
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf",&a[i]);
	}
	double max;
	max=a[0];
	for(i=1;i<n;i++){
		if(max<a[i])		
			max=a[i];
			
	}
	printf("%.2f\n",max);
	}
	
	return 0;
}


