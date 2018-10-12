#include<stdlib.h>
#include<iostream>
#include<math.h>

int main()
{

    float nota1, nota2, nota3, promedio, desviacion;

    printf("\n Ingrese la primera nota: ");
      scanf("%f",&nota1);
   printf("\n Ingrese la segunda nota: ");
      scanf("%f",&nota2);
    printf("\n Ingrese la tercera nota: ");
      scanf("%f",&nota3);
      promedio=((nota1+nota2+nota3)/3);
      printf("\n  El promedio de las 3 notas ingresadas es %.2f", promedio);
      desviacion=sqrt((pow((nota1-(promedio-1)),2)+pow((nota2-(promedio-1)),2)+pow((nota3-(promedio-1)),2))/3);
      printf("\n  La desviacion estandar de las 3 notas ingresadas es %.2f", desviacion);
      
}
