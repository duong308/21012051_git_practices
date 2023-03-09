#include<stdio.h>
double x;
int main(){
    double sinx = 0;
    scanf("%lf", &x);
    double n = 1.000000;
    double gt = x;
    double u = 1.000000;
    while( gt >= 0.0001 ){
        sinx += u*gt;
        u *= -1.00000;
        gt *= (x*x)/(2*n*(2*n+1));
        n++;
    }
    printf("%.6f", sinx);
    return 0;
}