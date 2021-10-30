#include<stdio.h>
void put_stringn(const char s[], int n)
{
	while(n--){
	printf("%s",s);}


}
int main(void)
{
	int n;
	scanf("%d",&n);
	char s[128];
	scanf("%s",s);
	put_stringn(s,n);
	return 0;
}
