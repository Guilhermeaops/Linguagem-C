#include <stdio.h>
#include <math.h>
int main(){

   double raio, area, pi =3.14159;

   printf("Digite o valor do raio do circulo: ");
   scanf("%lf", &raio);

   area = pi * pow(raio,2);

   printf("AREA = %.3lf", area);

    return 0;
}
