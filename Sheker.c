#include <stdio.h>
void shekerSort(double *mass, int count)
{
	int left = 0, right = count - 1;
	int flag = 1;
	printf("������� �����");
	while ((left < right) && flag > 0)
	{
		flag = 0;
		for (int i = left; i<right; i++)
		{
			if (mass[i]>mass[i + 1])
			{
				double t = mass[i];
				mass[i] = mass[i + 1];
				mass[i + 1] = t;
				flag = 1;
			}
		}
		right--;
		for (int i = right; i>left; i--) 
		{
			if (mass[i - 1]>mass[i])
			{
				double t = mass[i];
				mass[i] = mass[i - 1];
				mass[i - 1] = t;
				flag = 1;
			}
		}
		left++;
	}
}
int main() {
	double m[10];
	for (int i = 0; i<10; i++)
	{
		printf("m[%d]=", i);
		scanf("%lf", &m[i]);
	}
	shekerSort(m, 10);
	for (int i = 0; i<10; i++)
	{
		printf("%.2lf ", m[i]);
		getchar(); getchar();
	}
return 0;
}