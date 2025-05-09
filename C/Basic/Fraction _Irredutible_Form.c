#include <stdio.h>
#include <stdlib.h>
/*
The goal of this code is to read 2 integers in the form of a fraction "a/b" and write the irredutible form of it using prime numbers to cancel out the factors.
This exercise was taken from my own head to improve my skills with loops.

Subject to changes.
*/

int prime(int x){
  int b=1;
  if(x<2){
    b=0;
    return b;}
  for(int i=2;i<x;i++){
    if(x%i==0){
      b=0;
      return b; 
    }
  return b;} }

    int main() {
     int n1,n2,va1,va2;
     printf("type a fraction in the form of a/b with a and b integers: ");
     scanf("%d/%d", &n1, &n2);
     va1=n1;
     va2=n2;

     if(n1%n2==0){
      printf("\nirredutible form: ");
      printf("%d\n\n", n1/n2);
     }
     else{
       for(int i=2;i<=n1 && i<=n2;i++){
        if(prime(i) && n1%i==0 && n2%i==0){
          while(va1%i==0 && va2%i==0){
            va1=va1/i;
            va2=va2/i;
          }
        }
       }
       printf("\nirredutible form: ");
       printf("%d/%d\n\n", va1, va2);
     }
        return 0;
    }
