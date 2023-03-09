#include <stdio.h>  
void nhap(int n,float a[n][n],float b[n][n]){
    int i=0;
    int j=0;
    do{
        do{
            scanf("%f",&a[i][j]); 
            j++;
        }while(j<n); 
        j=0;
        i++;
    }while(i<n);
    i=0;
    j=0;
    do{
        do{
            scanf("%f",&b[i][j]); 
            j++;
        }while(j<n);
        j=0;
        i++;
    }while(i<n);
}
void cong_matran(int n,float a[n][n],float b[n][n],float tong[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            tong[i][j]=a[i][j]+b[i][j];
        }
    } 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%.2f ",tong[i][j]); 
        } 
        printf("\n"); 
    } 
}
int main(){ 
    int n;
    scanf("%d",&n);
    float a[n][n], b[n][n];
    float tong[n][n];
    nhap(n,a,b);
    cong_matran(n,a,b,tong);
}