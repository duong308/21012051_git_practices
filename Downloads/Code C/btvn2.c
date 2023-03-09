#include<stdio.h>
#include<stdlib.h>
int nhap(int t[100]){
	int i;
	for(i=0;i<=t;i++){
		scanf("%d",&t[i]);
	}
}

int sum(int n[100],int m[100]){
	int t[100];
	int i;
	for(i=0;i<=10;i++){
		t[i]=m[i]+n[i];
	}
	printf("Ket qua: ");
	for(i=10;i>0;i--){
		if(t[i]!=0){
			printf("%dx^%d+",t[i],i);
		}
	}
	printf("%d",m[0]+n[0]);
}
int main(){
	int dt1[100],dt2[100];
	printf("Nhap da thuc 1:");
	nhap(dt1);
	printf("Nhap da thuc 2:");
	nhap(dt2);
	sum(dt1,dt2);
	return 0;
}

