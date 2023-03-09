#include <stdio.h>
#include <string.h>

int main()
{

    char a[100], b[100], c[100], d[100];
    gets(a);
    gets(b);
    for (int i = 1; i < strlen(a); i++)
        printf("%c", a[i]);
    printf("%c\n", a[0]);
    printf("%c",b[strlen(b)-1]);
     for (int i = 0; i < strlen(b)-1; i++)
        printf("%c", b[i]);
}