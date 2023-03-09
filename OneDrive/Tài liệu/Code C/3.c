#include<stdio.h>
#include<stdlib.h>

void noi1(int ar[],int n)
{
int i;
printf("nhap cac phan tu:\n");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
}

void noi2(int ar[][3],int m)
{
 int i, j;
 for (i = 0; i < m; i++) 
 {
for (j = 0; j < 3; j++) 
{
 printf("%d-%d: ",i,j);
 scanf("%d",&ar[i][j]);
 }
 printf("\n");
 }
}

void print1DimArr(int ar[], int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d\t",ar[i]);
}
printf("\n");
}

int print2DimArrA(int ar[][3], int m)
{
 int i, j;
 printf("ket qua\n");
 for (i = 0; i < m; i++) 
 {
for (j = 0; j < 3; j++) 
{
 printf("%d\t",ar[i][j]);
 }
 printf("\n");
 }
}

int print2DimArrB(int ar[][3], int m)
{
 int i;
 printf("ket qua\n");
 for (i = 0; i < m; i++) 
 {
 print1DimArr( ar[i], 3);
 printf("\n");
 }
}

int main()
{
int n,a,m;
int ar[n];
int ara[m][3];

printf("1.1.1:\n");
printf("nhap so phan tu:\n");
scanf("%d", &n);
noi1(ar,n);
printf("ket qua:\n");
print1DimArr(ar,n);


printf("\n1.1.2\n");
printf("Nhap m = ");
scanf("%d", &m);
noi2(ara,m);
print2DimArrA(ara,m);


printf("\n1.1.3\n");
printf("Nhap m = ");
scanf("%d",&a);
noi2(ara,a);
print2DimArrB(ara,a);

return 0;
}
