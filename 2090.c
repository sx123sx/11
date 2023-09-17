#include<stdio.h> 
int main()
{
	double w,p,sum=0;
	while(scanf("%*s%lf%lf",&w,&p)!=EOF)
	{
		sum=sum+w*p;
	}
	printf("%.1lf\n",sum);
	return 0;
}

