#include <stdio.h>
#include <string.h>

int cau1(char *a)
{
    int d;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == ' ')
            d++;
        if (a[i] == '.')
           break;
    }

    return d;
}
int main()
{

    char a[100];
    gets(a);

    printf("%d", cau1(a) + 1);
}
