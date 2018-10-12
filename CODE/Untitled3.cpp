#include<iostream>

int main()
{

    int numero1, numero2, numero3;

    printf("\n Ingrese el primer numero: ");
      scanf("%d",&numero1);
   printf("\n Ingrese el segundo numero: ");
      scanf("%d",&numero2);
    printf("\n Ingrese el tercer numero: ");
      scanf("%d",&numero3);

    if ( numero1 >= numero2 && numero1 >= numero3 )
        printf( "\n  %d el numero mayor es", numero1 );
        
    else if ( numero2 > numero3 )
            printf( "\n   %d es el numero mayor", numero2 );
            
        else
            printf( "\n  %d es el numero mayor", numero3 );
 
    

    return 0;
}
