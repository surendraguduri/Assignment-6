#include<stdio.h>
int main()
{
	int n,x,r;
	scanf("%d",&x);//input integer from user
	scanf("%d",&n);//to set the nth bit
	x=x ^ (1<<(n-1));//
	printf("Number after toggle %d bit is:%d",n,x);
	return 0;
}
