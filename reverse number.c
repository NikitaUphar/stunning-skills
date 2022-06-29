#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a,s;
	printf("Enter Number:");
	scanf("%d",&n);
	
	while(n>0)
	{
	
	a=n%10;
	s=s*10+a;
	n=n/10;
    }
    printf("%d",s);
	return 0;
}
