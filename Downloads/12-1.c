#include <stdio.h>

int countEven(int *a, int size)
{

    int m = 0;
    for (int i = 0; i < size; i++)
        if (a[i] % 2 == 0)
            m++;

    return m;
}
int main()
{

    int a[101];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("%d", countEven(a, n));
}