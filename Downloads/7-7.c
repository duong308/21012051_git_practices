#include <stdio.h>
 
int main(){
	int n;
	scanf("%d", &n);
	int i;
	int s = 0, s1 = 0, s2 = 0;
	for(i = 1; i <= n; i++){
		s += i;
		if(i % 2 == 0){
			s1 += i;
		}
		else{
			s2 += i;
		}
	}
	
	printf("%d\n",s);
	printf("%d\n",s1);
	printf("%d\n",s2);
	return 0;
}