#include <stdio.h>
#include <stdlib.h>

void intput(int *a, int *n) {
	*n = 10;
	int i;
	for(i = 0; i <= *n; i++) {
		printf("he so cua x^%d = ", i);
		scanf("%d", &a[i]);
	}
}

void creat(int *a, int n) {
	int i;
	for(i = 0; i < n; i++) {
		a[i] = 0;
	}
}

void sum(int *a, int *b, int n, int *s, int *k) {
	int i;
	*k = 10;
	for(i = 0; i <= *k; i++) {
		s[i] = a[i] + b[i];
	}
}

void view(int *a, int n) {
	int i;
	for(i = n; i >= 0; i--) {
		printf("%dx^%d", a[i], i);
		if(i > 0 && a[i-1] > 0) {
			printf(" + ");
		} else if(a[i - 1] < 0) {
			printf(" ");
		}
	}
}

int main() {
	int p[100], q[100], s[100];
	int n, k;
	creat(p, 10);
	creat(q, 10);
	printf("Da thuc 1: \n");
	input(p, &n);
	printf("Da thuc 2: \n");
	input(q, &n);
	sum(p, q, n, s, &k);	
	printf("Tong hai da thuc = ");
	view(s, k);
	
	return 0;
}
