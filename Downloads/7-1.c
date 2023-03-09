#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int i,j=0,a,b,c;
	for(i=1;i<=n;i++){
		a=i/100;
		b=(i / 10) % 10;
		c=i % 10;
		if(a + c == b && i % 3 == 0){
			printf("%5d",i);
			j++;
		if(j % 10 == 0)
		printf("\n");
		}
	}
	return 0;
}