#include <stdio.h>
#include <stdlib.h>

int main(){

    float peso, altura, IMC;
    printf("Bote seu peso e altura: ");
    scanf("%f %f", &peso, &altura);
    IMC=peso/(altura*altura);

    if(IMC<18.5){
        printf("\nIMC:%.2f. Abaixo do peso\n", IMC);
    }
    else if(IMC>=18.5 && IMC<25){
        printf("\nIMC:%.2f. Peso normal\n", IMC);
    }
    else if(IMC>=25 && IMC<30){
        printf("\nIMC:%.2f. Sobrepeso\n", IMC);
    }
    else if(IMC>=30 && IMC<35){
        printf("\nIMC:%.2f. Obesidade grau 1\n", IMC);

    }
    else if(IMC>=35 && IMC<40){
        printf("\nIMC:%.2f. Obesidade grau 2\n", IMC);
    }
    else{
        printf("\nIMC:%.2f. Obesidade grau 3\n", IMC);
    }

  
    return 0;
}
