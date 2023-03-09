#include <stdio.h>
#include <string.h>
void xuly(char *a, char *b, char *c)
{
    for (int i = 0; i < strlen(a); i++)
        if (a[i] != b[0])
        {
            printf("%s", c);
        }
        else
        {
            printf("%s", a[i]);
        }
}

int main()
{

    char a[100], b[100], c[100], d[100];
    gets(a);
    gets(b);
    gets(c);
    for (int i = 0; i < strlen(a); i++)
  
    if(a[i]==b[0]){
 printf("%c",c[0]);
    }else{
         printf("%c",a[i]);
    }
  
}