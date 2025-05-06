#include <stdio.h>
/*
the goal of this code is to receive an intenger between 1 and 10, and give back the full multiplication table of that number.
this exercise was taken from the yt channel "programe seu futuro" c coding lessons. lesson 69.
*/
    int main() {
       int a;
       do{
       scanf("%d", &a);
       printf("\nthe number must be between 1 and 10: ");
       }while(!(a>=1 && a<=10)); //repeat it until the user gives a number between 1 and 10.
       printf("\n\n");

       for(int i=1;i<=10;i++){ 
         printf("%d * %d = %d\n", a, i, a*i); //i is added one by one from 1 to 10 and is accordingly multiplied by a.
       }
        return 0;
    }
