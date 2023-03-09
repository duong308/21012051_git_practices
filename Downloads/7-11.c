#include <stdio.h>
int main(){
    int n=100;
    double epsilon,i,j,e=1,m=1;
 
    scanf("%lf",&epsilon);
    for(i=1.0;i<=n;i++){
        m*=1/i;
        e+=m;
        if (m<epsilon)
            break;
    }
    printf("%.2f",e);
}