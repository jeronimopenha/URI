#include <stdio.h>
 
int main() {
    int codigo1,qtde1;
    float preco1;
    int codigo2,qtde2;
    float preco2;
    
	scanf("%d%d%f%d%d%f",&codigo1,&qtde1,&preco1,&codigo2,&qtde2,&preco2);
    printf("VALOR A PAGAR: R$ %.2f\n",(qtde1*preco1)+(qtde2*preco2));
 	
    return 0;
}
