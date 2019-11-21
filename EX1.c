#include <stdio.h>
#include <stdlib.h>
int main(int* argc, char* argv)
{       int a,c,d = 0,b = 0, sign=1;
	char x;
	printf("введите число:");
	x = getchar();
	c = atoi(&x);
	for(a = 0;x != '\n';a++)
	{
		b+=atoi(&x);
		d+=atoi(&x)*sign;
		sign*=-1;
		x = getchar();
//printf("%d %d\n",b,x);
	}
	printf("a = %d\n b = %d\n c = %d\n d = %d\n",a,b,c,d);
	return 0;
}
