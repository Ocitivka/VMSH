#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double a = 0;
	double b = 0;
	double c = 0;
	double d = 0;
	double x1 = 0;
	double x2 = 0;
	printf("Введите А: ");
	scanf("%lf",&a);
	if(a == 0)
	{
		printf("Это уравнение не квадратное\n");
		return 0;
	}
	printf("Введите В: ");
	scanf("%lf",&b);
	printf("Введите С: ");
	scanf("%lf",&c);

	d = b*b - 4*a*c;
	if(d < 0)
	{
		printf("Уравнение не имеет корней\n");
		return 0;
	}
	else
	{
		x1 = (-b + sqrt(d))/(2*a);
		x2 = (-b - sqrt(d))/(2*a);
		if(x1 == x2)
		{
			printf("x = %lf\n",x1);
		}
		else
		{
			printf("x1 = %lf;\nx2 = %lf\n",x1,x2);
		}
	}
	return 0;
}

