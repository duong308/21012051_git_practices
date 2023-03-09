#include <stdio.h>

#include <string.h>

int main()
{

    int n = 0,x=0;
    char a[101], b[101];

    gets(a);

    for (int i = strlen(a) - 1; i >= 0; i--)
    {
        b[n] = a[i];
        n++;
    }

    for (int i = 0; i < n; i++)
        if (a[i] != b[i])
        {
            x=1;
            break;
        }
if(x==1){
    printf("Khong");
}else{
   printf("Co");
}
 

   
}