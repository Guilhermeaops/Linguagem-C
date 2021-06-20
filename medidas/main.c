#include <stdio.h>


int main(){

    double a, b, c, areaQuadrado, areaTriangulo, areaTrapezio;

    printf("Digite a media A: ");
    scanf("%lf", &a);
    printf("Digite a media B: ");
    scanf("%lf", &b);
    printf("Digite a media C: ");
    scanf("%lf", &c);

    areaQuadrado = a * a;
    areaTriangulo = a * b / 2;
    areaTrapezio = (a + b) * c / 2;

    printf("AREA DO QUADRADO = %.4lf\n", areaQuadrado);
    printf("AREA DO TRIANGULO = %.4lf\n", areaTriangulo);
    printf("AREA DO TRAPEZIO = %.4lf", areaTrapezio);

    return 0;
}
