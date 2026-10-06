#include<stdio.h>
#include<math.h>
int main() 
{
	double a,b,c,d,e,f;
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
	double t=sqrt(pow(a-c,2)+pow(b-d,2));
	double h=sqrt(pow(c-e,2)+pow(d-f,2));
	double g=sqrt(pow(a-e,2)+pow(b-f,2));
	double p=(t+h+g)/2;
	double s=sqrt(p*(p-t)*(p-h)*(p-g));
	printf("%.2f",s);
	return 0;
}
