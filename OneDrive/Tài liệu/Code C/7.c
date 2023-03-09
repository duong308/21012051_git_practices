#include <stdio.h> 
#include <stdlib.h> 
int main(void) 
{ 
int h[4]={4,5,6}; 
printf("Gia tri cua h[0]=%d\n", h[0]); 
printf("Gia tri cua h[4]=%d\n", h[4]); 
printf("Dia chi cua h[0]=%p\n", &h[0]);  
printf("Dia chi cua h[0]=%p\n",h);  
printf("Dia chi cua h[1]=%p\n", &h[1]); 
printf("Dia chi cua h[1]=%p\n", h+1); 
printf("Gia tri cua h[1]=%d\n", h[1]); 
printf("Gia tri cua h[1]=%d\n", h[0]+1); 
return 0; 
}
