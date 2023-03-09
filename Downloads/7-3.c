#include<stdio.h>
#include<math.h>
int tg1(int n)
{
	int i,j;
    for(i = 1; i <= n; i++) 
	{
      for(j = 1; j <= i; j++)
        printf("*");
      printf("\n");
    }
    for(i = n; i >= 1; i--) 
	{
      for(j = 1; j <= i; j++)
        printf("*");
      printf("\n");
    }
    return 0;
}
int tg2(int n)
{
	int i,j;
	for(i = 1; i <= n; i++) 
	{
		for(j = 1; j < 2*n; j++) 
		{
			if(abs(n - j) <= (i - 1)) 
			{
				printf("*");
			} 
			else 
			{
				printf(" ");
			}
		}
	    printf("\n");
	}
    return 0;
} 
int main()
{
    int n;
    scanf("%d", &n);
	tg1(n);
    tg2(n);
}