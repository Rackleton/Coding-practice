#include <stdlib.h>
#include <math.h>
/*
make a calculator for the quadratic formula, including imagnary values.

exercise was taken from my own head.
*/
int main(){
    
    float a,b,c, delta;
    scanf("%f %f %f", &a, &b, &c);

    delta=pow(b,2)-4*a*c;

    if(delta>=0){
        printf("R1 = %.3f\nR2 = %.3f\n", (-b+sqrt(delta))/(2.0*a), (-b-sqrt(delta))/(2.0*a));
    }
    if(delta<0){
        int abs_delta = fabs(delta);
        printf("R1 = %.3f + %.3f * i\nR2 = %.3f + (%.3f) * i\n", -b/(2*a), sqrt(abs_delta)/(2.0*a), -b/(2*a), -sqrt(abs_delta)/(2.0*a)); 
    }

    
    
    
    
    system("pause");
    return 0;
}
