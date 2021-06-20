#include <stdio.h>

int main(){

    int quant;
    double precoUnitario, dinheiroRecebido,troco;

    printf("Preco unitario do produto: ");
    scanf("%lf", &precoUnitario);
    printf("Quantidade comprada: ");
    scanf("%d", &quant);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiroRecebido);

    troco = dinheiroRecebido - precoUnitario * quant  ;

    printf("TROCO = %.2lf", troco);

    return 0;
}
