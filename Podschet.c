#include <stdio.h>
const int MAX = 65536;
void sort(int values[], int n);
int main()
{
	int a[] = {10, 0, 75, 43, 15, 25, 2, 27, 43};
	sort(a, 9);
}
void sort(int values[], int n)
{
	int counter[MAX];
	for(int i = 0; i < MAX - 1; i++)
	{
		counter[i] = 0;
	}
	for(int i = 0; i < n; i++)
	{
		counter[values[i]]++;
	}
	for(int i = 0; i < MAX - 1; i++)
	{
		for(int j = 0; j < counter[i]; j++)
		{
			values[j] = i;
		}
	}
	return;
}