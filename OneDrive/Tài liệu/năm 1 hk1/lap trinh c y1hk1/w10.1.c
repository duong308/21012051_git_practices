#include <stdio.h>
#include <string.h>

int cau1(char *a)
{
	int d;
	for(int i = 0; i < strlen(a); i++)
	{
		if(a[i] == ' ')
		{
			d++;
		}
	}
	return d;
}

int main()
{
	char a[100];
	fgets(a, sizeof(a) + 1, stdin);
	printf("%d", cau1(a));
	return 0;
}
