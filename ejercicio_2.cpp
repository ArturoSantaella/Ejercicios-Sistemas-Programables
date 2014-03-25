#include <stdio.h> 
int main () 
{ 
int i, j, a; 
printf("Ingrese el numero\n"); 
scanf("%d", &a); 
for (i = a; i > 0; --i) { 
for (j = 0; j < i; ++j) printf("*"); 
printf("\n"); 
} 
return 0; 
} 

