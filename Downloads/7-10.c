#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	if(n < 2){
		printf("KHONG", n);
	}
	else if(n == 2){
		printf("CO", n);
	}
	else{
		int i;
		for(i = 3; i <= n; i+=2){
			if(n % i == 0)
			       break;		
		}
		if(i == n){
			printf("CO", n);
		}
		else{
			printf("KHONG", n);
		}
	}
	return 0;
}
