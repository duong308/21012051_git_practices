#include <stdio.h>

int print2DimArrA(int ar[][3], int m)
{
int i, j;
for (i = 0; i < m; i++) 
{
	for (j = 0; j < 3; j++) 
	{
		printf("%d\t", ar[i][j]);
    }
    printf("\n");
}
}

int main()
{
int ar[100][3];
int m;
printf("Nhap m = ");
scanf("%d", &m);
printf("Ket qua: ", print2DimArrA(ar, m));
}

