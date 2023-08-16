#include<stdio.h>
#include<math.h>

main(){

     //potencia e modulo
    
    int num1 , num2 , potencia, modulo;

    printf("Digite dois numeros inteiros");
    scanf("%d", &num1);
    printf("Digite dois numeros inteiros");
    scanf("%d", &num2);

    //potencia

    //potencia = (num1 ^ num2);
    potencia = pow(num1, num2);

    printf("\nResultado potencia: %d", potencia);

    //modulo

    modulo = num1 % num2;

    printf("\nResultado modulo: %d", modulo);

}