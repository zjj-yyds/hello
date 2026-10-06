#include<stdio.h>
int main() 
{
	char a;
	int b;
	float c;
	double d;
	scanf("%c",&a);
	scanf("%d",&b);
	scanf("%f",&c);
	scanf("%lf",&d);
	printf("%c %d %f %lf",a,b,c,d);
	return 0;
}
