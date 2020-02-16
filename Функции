#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define K 100
int my_strlen(char *ptr)
{
	int size;
	for(size = 0;*ptr != '\0';size++)
	{
		ptr++;
	}
	return size;
}
char *my_strcpy(char *cs,char *ct)
{
	int i;
	for(i = 0;ct[i] != '\0';i++)
	{
		cs[i] = ct[i];
	}
	cs[i] = '\0';
	return cs;
}
char *my_strcat(char *t,char *s)
{
	char *g;
	int i;
	g = t;
	while(*g != '\0')
	{
		g++;
	}
	for(i = 0;s[i] != '\0';i++)
        {
                g[i] = s[i];
        }
        g[i] = '\0';
        return t;
}
int my_strcmp(char *a,char *b)
{
	int i;
	for(i = 0;a[i] == b[i];i++)
	{
		if(a[i] == '\0')
		{
			break;
		}
	}
	return(a[i] - b[i]);
}
int main()
{
	char a[K],b[2*K],c[K];
	int get,i;
	printf("Придумайте новый пароль: ");
	scanf("%s",a);
	printf("Обработка...\n");
	get = my_strlen(a);
	printf("%d\n",get);
	my_strcpy(b,a);
	printf("%s\n",b);
	my_strcat(b,a);
	printf("%s\n",b);
	while(1)
	{
		printf("Для подтверждения,введите его ещё раз: ");
		scanf("%s",c);
		if(my_strcmp(a,c))
		{
			printf("Не подтверждено.\n");
		}
		else
		{
			printf("Подтверждено,не забудьте свой новый пароль!\n");
			break;
		}
	}
	return 0;
}
