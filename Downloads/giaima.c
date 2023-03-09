#include<stdio.h>
#include<string.h>
#include<ctype.h>

void giaima(char *s,int k)
{
    for(int i=0;i<strlen(s);i++){
        if(isalpha(s[i])){
            if(s[i]>=65 && s[i]<=90)
            {
                s[i]-=k;
                while(s[i]<65)
                   s[i]=91 - (65-s[i]);
            }
            if(s[i]>=97 && s[i]<=122)
            {
                s[i]-=k;
                while(s[i]<97)
                s[i]=123 - (97-s[i]);
            }
        }
    }
}
int main(){
    char s[200];
    int k,l;
    printf("Doan muon giai ma: ");
    fgets(s,sizeof(s),stdin);
    s[strlen(s)-1]='\0';
    printf("Nhap gioi han giai ma: ");
    scanf("%d",&l);
    for(int a=0;a<l;a++){
    giaima(s,k);
    printf("Giai ma thong diep luc nay k = %d : %s\n",a,s);
    }
    return 0;
}