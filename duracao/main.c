#include <stdio.h>


int main(){

    int duracao ,horas ,minutos ,segundos, resto;

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);

    horas = duracao / 3600; // divide o valor de duracao por 3600 segundos que equivale a 1 h0ra e pega somente seu valor inteiro
    resto = duracao % 3600; // calcula o resto de duracao e guarda na variaval

    minutos = resto / 60; // pega o valor guardado na variavel e divide por 60 segundos que equivale a 1 minuto
    segundos = resto % 60; // pega o valor também guardado na variavel e pega o seu resto de divisao que é equivalente ao segundos

    printf("%d:%d:%d", horas,minutos,segundos);

    return 0;
}
