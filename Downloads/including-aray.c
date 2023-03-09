#include <stdio.h>

void SXgiamdan(int a[],int n){  //Hàm sắp xếp các phần tử trong mảng theo thứ tự giảm dần 
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(a[i]>a[j]){
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
}
void SXtangdan(int a[], int n){ //Hàm sắp xếp các phần tử trong mảng theo thứ tự tăng dần
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(a[j]>a[i]){
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
}
void reading_array(int a[], int n){ //Hàm nhận các giá trị vào mảng có kích cỡ n từ bàn phím 
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
       
    }
}
void printing_array(int a[], int n){ //Hàm in ra n giá trị đầu tiên trong mảng 
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
        if (i == n-1 ){
            printf("\n");
        }
    }
}
void abs_array(int a[], int n){ //Hàm trả tất cả các giá trị trong mảng về giá trị tuyệt đối 
    for(int i=0; i<n; i++){
        if (a[i] < 0 ){
            a[i] = -a[i];
        }
    }
}
int main(){
    int n; printf("Nhap so n:");scanf("%d", &n);
    int a[100];
    reading_array(a, n);
    SXtangdan(a,n);
    printing_array(a,n);
    SXgiamdan(a,n);
    printing_array(a,n);
    return 0; 
}