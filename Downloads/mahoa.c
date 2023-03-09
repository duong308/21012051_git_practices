#include<stdio.h>
#include<string.h>
#include<ctype.h>
void mahoa(char *s,int k)
{
    for(int i=0;i<strlen(s);i++){
        if(isalpha(s[i])){
            if(s[i]>=65 && s[i]<=90){
                s[i]+=k;
                while(s[i]>90)
                   s[i]=64 + (s[i] - 90);
            }
            if(s[i]>=97 && s[i]<=122){
                s[i]+=k;
                while(s[i]>122)
                s[i]=96 + (s[i]-122);
            }
        }
    }
}
int main(){
    char s[200];
    int k;
    printf("Doan muon ma hoa: ");
    fgets(s,sizeof(s),stdin);
    s[strlen(s)-1]='\0';
    printf("Nhap vao so buoc : ");
    scanf("%d",&k);
    mahoa(s,k);
    printf("Noi dung ma hoa : %s\n",s);
    return 0;
}