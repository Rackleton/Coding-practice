#include <stdio.h>
 /*
the goal of this code is to read an amount of money in reais and convert it to the fewewst amount of money bills and coins possible.

this execise was taken from beecrowd.
*/
int main() {
  double N;
    unsigned int n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m05, m01, resto=0, centavos;
   scanf("%lf", &N);
   
   if(N>=0 && N<=1000000.00){
   int parte_inteira;
   parte_inteira=(int)N;
   centavos=(int)((N-parte_inteira)*100);
   n100=N/100;
   resto=((int)(N))%100;
   n50=resto/50;
   resto=resto%50;
   n20=resto/20;
   resto=resto%20;
   n10=resto/10;
   resto=resto%10;
   n5=resto/5;
   resto=resto%5;
   n2=resto/2;
   resto=resto%2;
   m1=resto;
   m50=centavos/50;
   centavos=centavos%50;
   m25=centavos/25;
   centavos=centavos%25;
   m10=centavos/10;
   centavos=centavos%10;
   m05=centavos/5;
   centavos=centavos%5;
   m01=centavos;
   
   
   
   
   printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m05, m01);
   }
 
    return 0;
}
