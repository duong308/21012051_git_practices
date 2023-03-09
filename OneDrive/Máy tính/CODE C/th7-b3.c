#include <stdio.h>
#include <stdlib.h>

void ADJUST(int K[], int i, int n) {
    int KEY = K[i]; 
    int j = 2 * i;  
    while (j <= n) {
        if ( (j < n) && (K[j] < K[j+1]) ) j = j+1;
        if (KEY > K[j]) {
            K[j/2] = KEY;
            return;
        }
        K[j/2] = K[j];
        j = 2*j ; 
    }
    K[j/2] = KEY;
}

void HeapSort(int K[], int n) {
    int i;
    for (i = n/2; i >=1; i--)
        ADJUST(K, i, n);

    for (i = n-1; i >= 1; i--) {
        int tmp = K[1];
        K[1] = K[i+1];
        K[i+1] = tmp;
        ADJUST(K, 1, i);
    }
}


int main(){
	int i, n, a[100];
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	for (i=0; i<n; i++){
		printf("phan tu chi so %d la: ", i);
		scanf("%d", &a[i]);
    }
    printf("Sap xep tang dan: \n");
    HeapSort(a, n);
	for (i=0; i<n; i++){
    	printf("%d ", a[i]);
	}
}
