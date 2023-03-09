#include<stdio.h>
#include<stdlib.h>

void search(int arr[1000*1000],int X){
    for(int i=0;i<=length(arr);i++){
        if(arr[i] == X){
            printf("Element found at index %d",i);
        }    
        return;
    }
    printf("Element not found");
}   //O(1)

int linearCount(int arr[],int n,int X){
     int j;
    for(int i=1;i<=n;i++){
        if(arr[i] == X){
            j+=1;
        }   
    }
    if(!j) printf("Element not found");
    else printf("Number of Element: %d",j);
    return j;
}  //O(n)

int logCount(int A[],int N, int X){
    int j;
    for(int i=1;A[i] <= X+sqr(X);i++){
        if(A[i] == X){
            j+=1;
        }
    }
    if(!j) printf("Element not found");
    else printf("Number of Element: %d",j);
    return j;
} //O(logn)