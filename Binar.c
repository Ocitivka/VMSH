#include <stdio.h>
#include <stdlib.h>
int main()
{
	int k[20];
	int r[20];
	int key, i;
	k[0] = 8;  k[1] = 14;
	k[2] = 26;  k[3] = 28;
	k[4] = 38;  k[5] = 47;
	k[6] = 56;  k[7] = 60;
	k[8] = 64;  k[9] = 69;
	k[10] = 70; k[11] = 78;
	k[12] = 80; k[13] = 82;
	k[14] = 84; k[15] = 87;
	k[16] = 90; k[17] = 92;
	k[18] = 98; k[19] = 108;
	for (i = 0; i < 20; i++) 
	{
		printf("%2d. k[%2d]=%3d: r[%2d]= ", i, i, k[i], i);
		scanf("%d", &r[i]);
	}
	printf("¬ведите key: ");
	scanf("%d", &key);
	int left = 0;
	int right = 19;
	int search = -1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (key == k[mid])
		{
			search = mid;
			break;
		}
		if (key < k[mid])
		right = mid - 1;
		else
		left = mid + 1;
	}
	if (search == -1)
	printf("Ёлемент не найден!\n");
	else
	printf("%d. key= %d. r[%d]=%d", search, k[search], search, r[search]);
	getchar(); getchar();
	return 0;
}