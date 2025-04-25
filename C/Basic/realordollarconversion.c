#include <stdio.h>
#include <stdlib.h>
/*
The goal of this code is to choose between converting R$ to U$D or U$D to R$ and then convert the value at the quotation of 1 U$D = 5.30 R$

this code was tested to have a minimal user interface.
*/
int option;
float dinheiro;

int main(){

   printf("\n\n\n\t\t\t\t---------------------------------------------------------\n\n\t\t\t\twich conversion you wish to do?\n\n\t\t\t\tPress 1: Real --> Dollar     Press 2: Dollar --> Real\n\n\t\t\t\t---------------------------------------------------------\n\n");
   printf("\n\n\t\tChoose 1 or 2: ");
   scanf("%d", &option);


   switch(option){
    case 1:
    printf("\n\n\n\t\tHow many Reais? ");
    scanf("%f", &dinheiro);
    printf("\n\n\t\t%.2f Reais is currently equal to %.2f Dollars\n\n\n", dinheiro, dinheiro/5.30);

    break;

    case 2:
    printf("\n\n\n\t\tHow many Dollars? ");
    scanf("%f", &dinheiro);
    printf("\n\n\t\t%.2f Dollars is currently equal to %.2f Reais\n\n\n\n\n\n", dinheiro, dinheiro*5.30);

    break;

    default:
        printf("invalid input\n\n\n\n\n\n");
    
    }
  
    return 0;
}
