#include<stdio.h>
int main()
{
	int n,x,r;
	scanf("%d",&x);
	scanf("%d",&n);
	r=(1<<(n-1))& x;
	if(r!=0)
	{
		printf("%d  bit  %d is SET",n,x);
	}
	else
	{
		printf("%d bit of %d is NOT SET",n,x);
		
	}
	return 0;
}
