#include <stdio.h>
 /*
the goal of this code is to read an amount of money in reais and convert it to the fewewst amount of money bills possible.

this execise was taken from beecrowd.
*/
int main() {
 
   unsigned int N, n100, n50, n20, n10, n5, n2, n1, resto=0;
   scanf("%u", &N);
   
   if(N>0 && N<1000000){
    n100=floor(N/100);
   resto=N%100;
   n50=floor(resto/50);
   resto=resto%50;
   n20=floor(resto/20);
   resto=resto%20;
   n10=floor(resto/10);
   resto=resto%10;
   n5=floor(resto/5);
   resto=resto%5;
   n2=floor(resto/2);
   resto=resto%2;
   n1=resto;
   
   printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", N, n100, n50, n20, n10, n5, n2, n1);
   }
   
   
    return 0;
}
