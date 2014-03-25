#include<stdio.h> 
#include<conio.h> 
int main () 
{ 
int i, j, a,c; 
printf("Ingrese el numero\n"); 
scanf("%d", &a); 
a=a+1;
c=a;
for (i = 0; i < a; ++i) { 
for (j = 0; j < a; ++j) {

if (j>=c) 
{
printf("*");
}
else{
printf(" ");
}
}
printf("\n"); 
c--;
} 
return 0; 
}
