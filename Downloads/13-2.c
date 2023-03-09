#include <stdio.h>
#include <string.h>

int cau1(char *a)
{
    int d;
    for (int i = 0; i < strlen(a); i++)

        if (a[i] == ' ')
            d++;

    return d;
}

int main()
{

    char a[100];
    fgets(a, sizeof(a) + 1, stdin);
    char b[100];
    int x = 0, d = 0;

    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] != ' ')
        {
            b[d] = a[i];
            d++;
            
        }
        else
        {
            
            if (a[i+1]!=' ')
            {
                b[d] = ' ';
                d++;
                
            }
            
        }
    }
    b[d] = '\0';
    printf("%s", b);
}