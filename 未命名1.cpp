#include<stdio.h>
int main() 
{
	unsigned long long a;
	long long b;
	scanf("%llu %lld",&a,&b);
	if(b<0) 
	{
		printf(">");
	} 
	else 
	{
		if(a>b) 
		{
			printf(">");
		} 
		else 
		{
			if(a<b) 
			{
				printf("<");
			} 
			else 
			{
				printf("=");
			}
		}
	}
	return 0;
}
