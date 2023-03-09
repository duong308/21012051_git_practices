#include<stdio.h>

void xuat(int k[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",k[i]);
	}
}

void ADJUST(int K[], int i, int n){
    int KEY=K[i];
    int j=2*i+1;
    while(j<=n){
        if(j<n && K[j]<K[j+1]) j++;
        if(KEY>K[j]){
            K[((j-1)/2)]=KEY;
            return;
        }
        K[((j-1)/2)]=K[j];
        j=j*2+1;
    }
    K[((j-1)/2)]=KEY;
}

void HeapSort(int K[], int n){
    int i;
    for(i=(n-1)/2;i>=0;i--){
        ADJUST(K,i,n);
    }
    for(i=n-1;i>=0;i--){
        int tmp=K[0];
        K[0]=K[i];
        K[i]=tmp;
        ADJUST(K,0,i-1);
    }
}	

int main() 
{
	int i,n=6,a[]={10, 22, 55, 11, 88, 77}; 
	printf("danh sach khi chua dung heapsort: ");
	xuat(a,n);
	printf("\ndanh sach khi dung heapsort: ");
	HeapSort(a, n);
	xuat(a,n);
}
