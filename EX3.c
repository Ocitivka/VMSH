#include <stdio.h>
#include <stdlib.h>
#define max_size 10
int main()
{
	int array[max_size],i,j,be;
	int min_i;
	printf("Введите %d чисел: ",max_size);
	for(i = 0;i < max_size;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i = 0;i < max_size - 1;i++)
	{
		min_i = i;
		for(j = i + 1;j < max_size;j++)
		{
			if(array[min_i] > array[j])
			{
				min_i = j;
			}
		}
		be = array[i];
		array[i] = array[min_i];
		array[min_i] = be;
	}
	for(i = 0;i < max_size;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
	return 0;
}
