#include <stdio.h>
#include <stdlib.h>

int main(){

    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);

    if(a+b>c && a+c>b && b+c>a){

        printf("\nthe triangle exists ");
        if (a == b && b == c){
            printf("and its equilateral\n");
        }
        else if(a == b || a == c || b == c){
            printf("and its isosceles\n");
        }
        else {
            printf("and its equilateral\n");
        }
    }
    else{
        printf("The sides dont form a triangle\n");
    }

    return 0;
}
