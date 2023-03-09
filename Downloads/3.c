#include <math.h>
#include <stdio.h>
#include <stdlib.h>
void prob1(double k) {
	int y;
    for (y = 2; y <= k; y++) {
        int x = 1;
        while (pow(y, x) <= k) {
            printf("(%d, %d) ", x, y);
            x++;
        }
    }
    printf("\n");
}

long long prob2(int* z) {
    long long sum = 0;
    int i = 1;
    while( i*i < *z){
        sum += i*i;
        i += 2;
    }
    return sum;
}
double prob3(int* n){
    int mau = 0, i;
    double result = 1;
    for(i = 1; i <= *n ;i++) {
        mau += 2 * i - 1;
        result += (double)pow (2, 2 * i) / mau;
    }
    return result;
}
void prob4(double* S, int* k){
    int i = 1;
    while( i*i*i*i*i < *S){
        i++;
    }
    *k = i;
}

int isPrime(int p){
	int i;
    for(i = 2; i*i <= p; i++){
        if( p % i == 0 ){
            return 0;
        }
    }
    return 1;
}
void bai5(double* a, double* b){
	int i;
    printf("Cac so nguyen to nam tren doan [%.2lf,%.2lf]: ", *a, *b);
    for(i = ceil(*a); i <= floor(*b); i++){
        if( isPrime(i) ){
            printf("%d ", i);
        }
    }
    printf("\nCac so chinh phuong nam tren doan [%.2lf,%.2lf]: ", *a, *b);
    for(i = ceil(*a); i <= floor(*b); i++){
        if( (int)sqrt(i)*(int)sqrt(i) == i ){
            printf("%d ", i);
        }
    }
    printf("\n");
}
int bai6(float a, float b, int c){
    printf("Cac so nguyen duong tren doan [a,b] chia het cho c la: ");
    for(int i=a;i<=b;i++){
    if(i%c==0){
        printf(" %d ",i);
        }
    }
    printf("\n");
}
int bai7(int n){
float tu=1,mau=1,s=0;
    printf("Tong S la: ");
    for (int i=1;i<=n;i++){
        tu=2*i;
        mau=i*i;
        s+=tu/mau;
    }
    printf("%f",s);
    printf("\n");
}
int bai8(int n){
float tu=0,mau=0,s=0;
    for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        tu+=j;
        }
        mau=sqrt(tu);
        s+=tu/mau;
        tu=0,mau=0;
    }
printf("S: %f ",s);
printf("\n");
}
int bai9(int k){
int x=2,y=1;
    for(x=2;pow(x,y)<=k*k;x++){
    for(y=1;pow(x,y)<=k*k;y++){
    if(x<=y||y==1)
        printf("(%d,%d) ",x,y);
        }
        y=1;
    }
    printf("\n");
}
int tinhtongz(int z){
    int  x=0;
    int temp = z,tongtemp=0;
    while (temp != 0){
        tongtemp += temp % 10;
        temp /= 10; 
    }
    x = tongtemp + z ;
    return x;
}
int main() {
    printf("Ten sinh vien: Nguyen Van A\n");
    printf("Ma so sinh vien: 00000000\n");
    printf("Ngon ngu lap trinh C lop 08\n");
    char check;
    int lc;
    do {
        printf("CHUONG TRINH TINH:\n");
        printf("1. Viet ham in ra tat ca cac bo 2 so nguyen duong (x,y) sao cho: luy thua bac x cua y khong vuot qua k.\n");
        printf("2. Viet ham tinh tong cua cac so chinh phuong le nho hon mot so tu nhien z.\n");
        printf("3. Viet ham tinh S = 1 + 4/1 +... + 2^2n/(1+3+...+(2n-1))\n");
        printf("4. Viet ham tim so tu nhien k nho nhat sao cho S <= k^5\n");
        printf("5. Viet ham in ra cac so nguyen to va so chinh phuong tren [a,b], a < b\n");
        printf("6. Viet ham in ra cac so nguyen duong tren doan [a,b] chia het cho c.\n");
        printf("7. Viet ham tinh S = 2/1+4/4+6/9+...+2n/n^2\n");
        printf("8. Viet ham tinh S = 1 + 1+2/sqrt(1+2) +... + (1+2+...+n)/sqrt(1+2+...+n)\n");
        printf("9. Viet ham in ra tat ca cac cap nguyen duong (x,y) sao cho xy < z^2, z > 0\n");
        printf("10. Viet ham tinh tong cac chu so cua so nguyen duong z cong voi z.\n");
        printf("Ban muon thuc hien chuong trinh nao? ");
        scanf("%d", &lc);
        double a, b, c, S;
        double k;
        int z;
        int l;
        int n;
        switch (lc) {
            case 1:{
                printf("Nhap vao so thuc k: ");
                scanf("%lf", &k);
                prob1(k);
                break;
            }
            case 2:{
                printf("Nhap vao so tu nhien z: ");
                scanf("%d", &z);
                while(z < 0){
                    printf("%d khong la so tu nhien. Vui long nhap lai: ", z);
                    scanf("%d", &z);
                }
                printf("Tong cac so chinh phuong le nho hon z la: S = %ld\n", prob2(&z));
                break;
            }
            case 3:{
                
                printf("Nhap vao so nguyen duong n: ");
                int n;
                scanf("%d", &n);
                while( n <= 0 ){
                    printf("Nhap vao so nguyen duong n: ");
                    scanf("%d", &n);
                }
                printf("S = %.2lf", prob3(&n));
                break;
            }
            case 4:{ 
                printf("Nhap vao S: ");
                scanf("%lf", &S);
                int k ;
                prob4(&S,&k);
                printf("k = %d\n", k);
                break;
            }
            case 5:{
                printf("Nhap vao 2 so thuc a < b: ");
                scanf("%lf %lf", &a, &b);
                while( a >= b){
                    printf("a,b khong thoa man. Vui long nhap lai: ");
                    scanf("%lf %lf", &a, &b);
                }
                bai5(&a,&b);
                break;
            }
            case 6:{
                float a,b;
                int c;
                printf("Nhap doan [a,b]:",a,b);
                scanf("%f%f",&a,&b);
                printf("Nhap c: ",c);
                scanf("%d",&c);
                bai6(a,b,c);
                break;
            }
            case 7:{
                int n;
                printf("Nhap n: ",n);
                scanf("%d",&n);
                bai7(n);
                break;
            }
            case 8:{
                int n;
                printf("Nhap n: ",n);
                scanf("%d",&n);
                bai8(n);
                break;
            }
            case 9:{
                int k;
                printf("Nhap k: ",k);
                scanf("%d",&k);
                bai9(k);
                break;
            }
            case 10:{
                int z;
                printf("Nhap so z: ");
                scanf("%d",&z);
                printf("Tong so z la: %d",tinhtongz(z));
                printf("\n");
                break;
            }
            case 12:{
            default:
                break;
            }
        }
        fflush(stdin);
        printf("Ban co muon thuc hien chuong trinh tiep khong(y/n): ");
        scanf("%c", &check);
        while (check != 'y' && check != 'n') {
            printf("Input Valid. Vui long nhap lai: ");
            fflush(stdin);
            scanf("%c", &check);
        }

    } while (check == 'y');
    return 0;
}
