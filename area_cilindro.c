#include <stdio.h>
#define PI 3.141592

int main()

{
    double radio, altura, area_lateral, area_total;
    
    printf("Ingrese al radio del cilindro en cm: ");
    scanf("%lf", &radio);
    printf("Ingrese la altura del cilindro en cm: ");
    scanf("%lf", &altura);
    
    area_lateral = 2 * PI * radio *altura;
    area_total = 2 * PI * radio * altura + 2 * PI * radio * radio;
    
    printf("el area total del cilindro es: %.2f", area_total);
    
    return 0;
    
    
}
