#include <stdio.h>
#include <stdlib.h>
#define H 6
#define K 1001
int main()
{
	int i;
	int A[H];
	int C[K] = {0};
	int b = 0;
	printf("Введите натуральные числа от 0 до %d: ",K - 1);
	for(i = 0;i < H;i++)
	{
		scanf("%d",&A[i]);
		if((A[i] > K - 1 || A[i] < 0))
		{
			printf("НАТУРАЛЬНЫЕ ОТ 0 ДО %d!!!\n",K - 1);
			return 0;
		}
		C[A[i]]++;
	}
	for(i = 0;i < K;i++)
	{	
	//	A[i] = k;
		for(int j = 0;j < C[i];j++)
		{
			A[b] = i;
			b = b + 1;
		//	k = j;
		//	j = j + 1;
		//	j = k;
		}
	}
	printf("Вот: ");
	for(i = 0;i < H;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
	return 0;
}
