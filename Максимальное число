#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int maxNum,lastNum;
	printf("Введите любое кол-во чисел,затем введите любую букву: ");
	if(scanf("%d",&maxNum) != 1)
	{
		return 1;
	}
	while(scanf("%d",&lastNum) == 1)
	{
		if( lastNum > maxNum)
		{
			maxNum = lastNum;
		}
	}
	printf("Самое большое %d\n",maxNum);
	return 0;
}
