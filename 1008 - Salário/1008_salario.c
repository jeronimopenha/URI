#include <stdio.h>
 
int main() {
    int mat, horas,i;
    float valh;

    i=scanf("%d%d%f",&mat,&horas,&valh);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",mat,valh*horas);
 	
    return 0;
}
