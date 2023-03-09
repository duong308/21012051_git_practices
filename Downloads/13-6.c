#include <stdio.h>
#include <string.h>

int main()
{

    char a[100], b[100];
    gets(a);
    gets(b);
    int c, d;
    scanf("%d", &c);
    for (int i = 0; i < strlen(a); i++)
    {

        d = (int)a[i]+c;
        if(d>122)d-=26;
        printf("%c", d);
    }
    printf("\n");
    for (int i = 0; i < strlen(b); i++)
    {

        d = (int)b[i] - c;
        if(d<97)d+=26;
               printf("%c", d );
    }
}