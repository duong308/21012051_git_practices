#include<stdio.h>
#include<stdlib.h>
int nhap(int t[100]){
	for(int i=0;i<=10;i++){
		scanf("%d",&t[i]);
	}
}
int sum(int n[100],int m[100]){
	int t[100];
	for(int i=0;i<=10;i++){
		t[i]=m[i]+n[i];
	}
	printf("pt=");
	for(int i=10;i>0;i--){
		if(t[i]!=0){
			printf("%dx^%d+",t[i],i);
		}
	}
	printf("%d",m[0]+n[0]);
}
int main(){
	int dt1[100],dt2[100];
	printf("nhap da thuc 1:");
	nhap(dt1);
	printf("nhap da thuc 2:");
	nhap(dt2);
	sum(dt1,dt2);
	return 0;
}