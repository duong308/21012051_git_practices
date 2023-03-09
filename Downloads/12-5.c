#include <stdio.h>

float maximum(float *a, int size)
{

    float m = 0, b[101];
    int x = 0;
    for (int i = 0; i < size; i++)
        m += a[i];
    m = m / size;
    for (int i = 0; i < size; i++)
        if (a[i] > m)
        {
            b[i] = a[i] - m;
        }
        else
        {
            b[i] = m - a[i];
        }
    m = b[0];
   
    for (int i = 1; i < size; i++)
        if (b[i] < m)
        {
            m = b[i];
            x = i;
        }

    return a[x];
}
int main()
{

    float a[101];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%f", &a[i]);

    printf("%.1f", maximum(a, n));
}