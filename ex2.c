#include <stdio.h>
int main (){

int n ;
int f =1;
printf("entrez soft les nombre positive \n");
scanf("%d",&n);
if(n<0){
    printf("La factorielle nest pas definie pour les nombres negatifs\n");
}
for (int i = 1; i <=n; i++){
    f *= i;
}
    printf("%d ! = %d \n",n,f);


return 0;
} 
