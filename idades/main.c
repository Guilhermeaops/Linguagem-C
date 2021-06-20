#include <stdio.h>
int main(){

    int idade1,idade2;
    double media;
    char nome1[50], nome2[50];

    printf("Dados da primeira pessoa:");
    printf("\nNome: ");
    gets(nome1);
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("Dados da segunda pessoa:");
    printf("\nNome: ");
    fseek(stdin, 0, SEEK_END);
    gets(nome2);
    printf("Idade: ");
    scanf("%d", &idade2);

    media = (double)(idade1 + idade2) / 2;

    printf("A idade media de %s e %s e de %.1lf",nome1,nome2,media);

    return 0;
}
