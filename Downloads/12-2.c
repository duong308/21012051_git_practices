#include <stdio.h>


float maximum(float *a, int size)
{

    float m = a[0];
    for (int i = 1; i < size; i++)
        if (a[i] > m)
            m = a[i];
    return m;
}
int main()
{

    float a[101];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%f", &a[i]);
  

    if (a[0] == '\0')
    {
        printf("NULL");
    }
    else
    {
        printf("%f", maximum(a,n));
    }
}