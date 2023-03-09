#include <stdio.h>
int main(){
    int tiengui,tienlai,sodu,tonglai=0;
    float lai;
    char ten[100];
    scanf("%f",&lai);
    getchar();
    gets(ten);
 
    scanf("%d",&tiengui);
    printf("Tai khoan khach hang: %s\n",ten);
    printf("Thang    Tien dau ky    Tien lai    So du\n");
    for (int i=1;i<=6;i++){
        tienlai=tiengui*lai*1/100;
        tonglai+=tienlai;
        sodu=tienlai+tiengui;
        printf("%9d%11d%12d    %-9d\n",i,tiengui,tienlai,sodu);
        tiengui=sodu;
    }
    printf("Tong lai: %d",tonglai);
}