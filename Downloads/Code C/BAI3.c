#include<stdio.h>
#include<stdlib.h>

void noi1(int *a, int n){
    int i;
    printf("Cac phan tu:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
} 

void noi2(int **a, int m, int n) {
    int i, j;
    for(i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d-%d: ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
}

void print1DimArr(int *a, int n) {
    int i;
    for(i=0;i<n;i++){
        printf("%d\t", *a++);
    }
    printf("\n");
}

int print2DimA(int **a, int m, int n){
    int i, j;
    printf("ket qua\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

int print2DimB(int **a , int m, int n){
    int i;
    printf("ket qua\n");
    for (i = 0; i < m; i++) {
        print1DimArr( a[i], n);
		printf("\n");
    }  
}

int main(){
    int n;
    int ar[n];
    int m,b,**a = NULL, i;
    printf("BAi 3.1:\n");
    printf("So phan tu: ");
    scanf("%d",&n);
    noi1(ar,n);
    printf("ket qua: \n");
    print1DimArr(ar, n);
    
	printf("\nBAI 3.2:\n");
    printf("So hang: ");
    scanf("%d",&m);
    printf("So cot: ");
    scanf("%d",&b);
    a = (int **)malloc(m * sizeof(int *));
    for (i = 0; i < m; i++) {
        a[i] = (int *)malloc(n * sizeof(int));
    }
    noi2(a, m, b);
    print2DimA(a, m, b);
    
	printf("\nBAI 3.3:\n");
    noi2(a, m, b);
    print2DimB(a, m, b);
    for (i = 0; i < m; i++){
        free(a[i]);
    }
    free(a);
    
	return 0;
}
