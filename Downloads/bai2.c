#include <stdio.h>  
#include <string.h> 
typedef struct sinhvien{
    char ten[100],quequan[100];
    int masosinhvien;
    float chieucao,cannang;
}sv;
void nhap(sv danhsach[],int n){
    for(int i=0;i<n;i++){
        getchar();
        printf("Nhap ten: "); 
            do{
                gets(danhsach[i].ten);
            }while(strlen(danhsach[i].ten)>30);
        printf("    Nhap que quan: "); 
            do{
                gets(danhsach[i].quequan);
            }while(strlen(danhsach[i].quequan)>20);
        printf("    Nhap ma so sinh vien: "); 
            do{
                scanf("%d",&danhsach[i].masosinhvien); 
            }while(danhsach[i].masosinhvien<100 || danhsach[i].masosinhvien > 999);
        printf("    Nhap chieu cao: "); 
            scanf("%f",&danhsach[i].chieucao);
        printf("    Nhap can nang: "); 
            scanf("%f",&danhsach[i].cannang);
    }
}
void xuat(sv danhsach[],int n){
    printf("+-----+------+-----------------+----------+-----------+----------+\n"); 
    printf("| STT | MaSV |       Ho va Ten | Que quan | Chieu cao | Can nang |\n"); 
    printf("+-----+------+-----------------+----------+-----------+----------+\n"); 
    for(int i=0;i<n;i++){
        printf("| %3d | %4d | %15s | %8s | %9.2f | %8.2f |\n"
                ,i+1,
        danhsach[i].masosinhvien,
        danhsach[i].ten,
        danhsach[i].quequan,
        danhsach[i].chieucao,
        danhsach[i].cannang);
        printf("+-----+------+-----------------+----------+-----------+----------+\n");
    }
}
void sapxep(sv danhsach[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(danhsach[i].chieucao<danhsach[j].chieucao){
                sv t = danhsach[i];
                danhsach[i]=danhsach[j];
                danhsach[j]=t;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n); 
    sv danhsach[n];
    nhap(danhsach,n);
    xuat(danhsach,n);//1
    sapxep(danhsach,n);
    xuat(danhsach,n);//2
    sv_hanoi(danhsach,n);
}