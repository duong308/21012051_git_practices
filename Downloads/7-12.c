#include <stdio.h>
#include<math.h>
int main(){
    int n=1000;
    float epsilon,i,e=0,m;
    scanf("%f",&epsilon);
    for(i=0;i<=n;i++){
            m=pow((-1),i)*1/(2*i+1);
            e+=m;
        if (1/(2*i+1)<=epsilon){
            break;
        }
    }
    e*=4;
    printf("%.2f",e);
}