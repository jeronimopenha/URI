#include <stdio.h>
 
int main() {
    char nome[1000];
    double salario, montante;
    
	fflush(stdin);
	scanf("%s",&nome);
    scanf("%lf%lf",&salario,&montante);
    printf("TOTAL = R$ %.2lf\n",salario + (montante*0.15));
 	
    return 0;
}
