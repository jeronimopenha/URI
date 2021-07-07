#include <stdio.h>
#define TAM 6

int main() {
    double valorDigitado;
    int qtde, valor;
    scanf("%lf", &valorDigitado);

    valorDigitado =  valorDigitado * 100.00;
    
    valor = valorDigitado;
        
    printf("NOTAS:\n");
    
    qtde = (int) valor / 10000;
    valor = valor % 10000;
    printf("%d nota(s) de R$ 100.00\n", qtde);

    qtde = (int) valor / 5000;
    valor = valor % 5000;
    printf("%d nota(s) de R$ 50.00\n", qtde);
    
    qtde = (int) valor / 2000;
    valor = valor % 2000;
    printf("%d nota(s) de R$ 20.00\n", qtde);
    
    qtde = (int) valor / 1000;
    valor = valor % 1000;
    printf("%d nota(s) de R$ 10.00\n", qtde);
    
    qtde = (int) valor / 500;
    valor = valor % 500;
    printf("%d nota(s) de R$ 5.00\n", qtde);
        
    qtde = (int) valor / 200;
    valor = valor % 200;
    printf("%d nota(s) de R$ 2.00\n", qtde);
        
    printf("MOEDAS:\n");
    

    qtde = (int) valor / 100;
    valor = valor % 100;
    printf("%d moeda(s) de R$ 1.00\n", qtde);
        
    qtde = (int) valor / 50;
    valor = valor % 50;
    printf("%d moeda(s) de R$ 0.50\n", qtde);
        
    qtde = (int) valor / 25;
    valor = valor % 25;
    printf("%d moeda(s) de R$ 0.25\n", qtde);
        
    qtde = (int) valor / 10;
    valor = valor % 10;
    printf("%d moeda(s) de R$ 0.10\n", qtde);
        
    qtde = (int) valor / 5;
    valor = valor % 5;
    printf("%d moeda(s) de R$ 0.05\n", qtde);
        
    qtde = (int) valor / 1;
    valor = valor % 1;
    printf("%d moeda(s) de R$ 0.01\n", qtde);
        
    return 0;
}
