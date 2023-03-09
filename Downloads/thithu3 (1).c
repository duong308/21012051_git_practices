#include<stdio.h>
#include<string.h>
#include<ctype.h>

int dem_so_luong_ki_tu_chu_hoa(char st[]){
	int i;
	int dem = 0;
	for(i = 0; i < strlen(st); i++){
		if(isupper(st[i])) {   
			dem++;
		}
	}
	return dem;
}

int dem_so_luong_ki_tu_chu_so(char st[]){
	int i;
	int dem = 0;
	for(i = 0; i < strlen(st); i++){
		if(isdigit(st[i])) {  // st[i] >= '0' && st[i] <= '9'
			dem++;
		}
	}
	return dem;
}

int kiem_tra_ki_tu_dac_biet(char c) {
	if(c >= '0' && c <= '9') {
		return 0;
	}
	if(c >= 'a' && c <= 'z') {
		return 0;
	}
	if(c >= 'A' && c <= 'Z') {
		return 0;
	}
	return 1;
}

int dem_so_luong_ki_tu_dac_biet(char st[]){
	int i;
	int dem = 0;
	for(i = 0; i < strlen(st); i++){
		if(!(isdigit(st[i]) || isalpha(st[i]))) {
			dem++;
		}
	}
	return dem;
}

void nhap_xau(char st[]) {
	printf("Nhap xau: ");
	while (1) {
		gets(st);
		if(strlen(st) >= 6 && st[0] == 'P' &&
		dem_so_luong_ki_tu_chu_hoa(st) > 0 &&
		dem_so_luong_ki_tu_dac_biet(st) > 0 &&
		dem_so_luong_ki_tu_chu_so(st) > 0){
			break;
		}
		printf("Xau khong hop le, xin hay nhap lai: ");
	}
}

void xoa_ki_tu_dac_biet(char st[]){
	int i, j;
	for(i = strlen(st) - 1; i > 0; i--){
		if(kiem_tra_ki_tu_dac_biet(st[i]) == 1) {
			for(j = i; j < strlen(st); j++) {
				st[j] = st[j + 1];
			}
		}
	}
}
struct san_pham{
    char ten_sp[100];
    char ma[10];
    int sl;
    int gia;
    int hsd;
};
typedef struct san_pham san_pham;
void nhap_ma_sp(char ma[]){
	while (1){
		gets(ma);
		if (dem_so_luong_ki_tu_chu_so(ma) == strlen(ma)){
			break;
		}
		printf("ma san pham khong hop le, xin nhap lai: ");
	}
}
int nhap_du_lieu(san_pham sp[]){
    int i = 0;
    do{
        printf("Nhap thong tin san pham thu %d\n", i+1);
		printf("Nhap ten: ");
		fflush(stdin);
		gets(sp[i].ten_sp);
		printf("Nhap ma san pham: ");
		nhap_ma_sp(sp[i].ma);
		printf("Nhap so luong: ");
		scanf("%d", &sp[i].sl);
		printf("Nhap gia sp: ");
		scanf("%d", &sp[i].gia);
		printf("Nhap hsd: ");
		scanf("%d", &sp[i].hsd);
		i++;
        fflush(stdin);
        printf("Ban co muon nhap tiep hay khong (y/n): ");
    } while (getchar() == 'y');
	return i;
}
void in_thong_tin(san_pham sp[], int n){
	printf("+-----+----------+--------+-----+-----+-------+\n");
	printf("| STT |   tenSP  |   MA   |  SL | gia |  HSD  |\n");
	printf("+-----+----------+--------+-----+-----+-------+\n");
	for (int i = 0; i < n; i++){
		printf("| %3d | %8s | %6s | %3d | %3d | %5d |\n", 
				i+1,
				sp[i].ten_sp,
				sp[i].ma,
				sp[i].sl,
				sp[i].gia,
				sp[i].hsd);
		printf("+-----+----------+--------+-----+-----+-------+\n");
	}
}
void max_gia(san_pham sp[], int n){
	int max = sp[0].gia;
	int t = 0;
	for (int i = 0; i < n; i++){
		if (max < sp[i].gia){
			max = sp[i].gia;
			t = i;
		}
	}
	printf("san pham co gia thanh cao nhat la: \n");
	printf("tenSP: %s\tMA: %s\tSL:%d\tGia:%d\tHSD:%d", sp[t].ten_sp, sp[t].ma, sp[t].sl, sp[t].gia, sp[t].hsd);
}
void sap_xep(san_pham sp[], int n){
	int i, j;
	for (i = 0; i < n-1; i++){
		for (j = i+ 1; j < n; j++){
			if (sp[i].hsd > sp[j].hsd){
				san_pham tmp = sp[i];
				sp[i] = sp[j];
				sp[j] = tmp;
			}
		}
	}
}
int main(){
	// char st[100];
	// nhap_xau(st);
	// xoa_ki_tu_dac_biet(st);
	// printf("Xau sau khi xoa ki tu dac biet: %s\n", st);
	san_pham sp[10];
	int n = nhap_du_lieu(sp);
	in_thong_tin(sp, n);
	max_gia(sp, n);
	sap_xep(sp, n);
	int m;
	printf("nhap so luong sp muon in ra: ");
	scanf("%d", &m);
	in_thong_tin(sp, m);
}
