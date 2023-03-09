#include <stdio.h>

void  print1DimArr(int ar[], int n)
{
int i;
printf("Ket qua: \n");
for (i=0; i<n; i++)
{
    printf("%d ", ar[i]);
    putchar('\n');
}
}


int main()
{
int ar[100];
int n;
printf("Nhap n = ");
scanf("%d", &n);
print1DimArr(ar, n);
}



