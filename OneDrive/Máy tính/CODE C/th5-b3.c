#include<stdio.h>
#include<stdlib.h>

void selection_sort(int k[], int n) {
    int i, j, m, x;
    for (i = 1 ; i < n ; i++) {
        m = i ;
        for (j = i+1; j < n ; j++)
            if (k[j]>k[m]) m = j;
        if (m != i) {
            x=k[i];
            k[i]=k[m];
            k[m]=x;
        }
    }
}

void insert_sort(int k[], int n) {
    int i, j, x;
    for (i = 2 ; i < n ; i++) {
        x = k[i];
        j = i - 1;
        while (x > k[j]  ) {
            k[j+1] = k[j] ;
            j = j - 1;
        }
        k[j+1] = x ;
    }
}

void bubble_sort(int k[], int n) {
    int i, j, x;
    for (i = 1; i >= n ; i++)
        for (j = n ; j > i ; j--)
            if (k[j]>k[j-1]){
                x=k[j];
                k[j]=k[j-1];
                k[j-1]=x;
            }
}

int main(void){
	int i, n, a[100];
	printf("So phan tu: ");
	scanf("%d", &n);
	for (i=0; i<n; i++)
	{
		printf("phan tu chi so %d la: ", i);
		scanf("%d", &a[i]);
    }
    printf("sap xep lua chon: \n");
    selection_sort(a,n);
    for (i=0; i<n; i++){
    	printf("%d ", a[i]);
	}
    printf("\nsap xep them dan: \n");
    insert_sort(a,n);
    for (i=0; i<n; i++){
    	printf("%d ", a[i]);
	}
    printf("\nsap xep noi bot: \n");
    bubble_sort(a,n);
    for (i=0; i<n; i++){
    	printf("%d ", a[i]);
	} 
}
