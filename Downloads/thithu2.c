#include<stdio.h>
#include<string.h>
struct tranh{
    char ten_tranh[30];
    char ten_tg[25];
    int nam;
    char hang[3];
    float gia;
};
typedef struct tranh tranh;
float truong_gia(tranh a){
    if (strcmp(a.hang, "A") == 0){
        return (2022 - a.nam)*3;
    }
    if (strcmp(a.hang, "B") == 0){
        return (2022 - a.nam)*1.5;
    }
    if (strcmp(a.hang, "C") == 0){
        return (2022 - a.nam)*1;
    }
}
int nhap_du_lieu(tranh tr[]){
    int n = 0;
    printf("nhap thong tin tranh \n");
    printf("- nhap thong tin buc tranh thu %d\n", n+1);
    printf("+ nhap ten buc tranh: ");
    gets(tr[n].ten_tranh);
    while (strcmp(tr[n].ten_tranh, "end") != 0){
        printf("+ nhap ten tac gia: ");
        gets(tr[n].ten_tg);
        printf("+ nhap nam sang tac: ");
        scanf("%d", &tr[n].nam);
        printf("+ nhap hang: ");
        scanf("%s", &tr[n].hang);
        printf("+ gia cua buc tranh la: %.2f\n", truong_gia(tr[n]));
        n++;
        printf("- nhap thong tin buc tranh thu %d\n", n+1);
        printf("+ nhap ten buc tranh: ");
        fflush(stdin);
        gets(tr[n].ten_tranh);
    }
    return n;
}
void sap_xep(tranh tr[], int n){
    int i, j, k;
    printf("cac buc tranh duoc dau gia theo thu tu giam dan la: ");
    for (k = 0; k < n; k++){
        tr[k].gia = truong_gia(tr[k]);
    }
    for (i = 0; i < n-1; i++){
        for (j = i+1; j < n; j++){
            if (tr[i].gia < tr[j].gia){
                tranh tmp = tr[i];
                tr[i] = tr[j];
                tr[j] = tmp;
            }
        }
        printf("%s, ", tr[i].ten_tranh);
    }
    printf("%s\n", tr[n-1].ten_tranh);
}
void lay_ten(tranh b, char *name){
    char *p = strrchr(b.ten_tg, ' ');
    strcpy(name, p+1);
}
int main(){
    tranh tr[10];
    int n = nhap_du_lieu(tr);
    sap_xep(tr, n);
    char name[10];
    printf("nhung buc tranh co hoa si ten Van la: ");
    for (int i = 0; i < n; i++){
        lay_ten(tr[i], name);
        if (strcmp(name, "Van") == 0){
            printf("%s\t", tr[i].ten_tranh);
        }
    }
}