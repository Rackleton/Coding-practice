#include <stdio.h>

/*
the goal of this exercise is to take the total number of students to enter cable cars(C) and the capacity of each of them(A). The condition is that for each cable cars, we gotta have at least one monitor(mon).
The output must give the fewest possible number of cable cars(v) to finish the task.

this exercise was taken from OBI-2017 fase 1.
*/

int main(){
    
    int C,A,v,mon, contador=0, contador2=0;
    scanf("%d %d", &C, &A);
    if(C>=2 && C<=100 && A<=1000 && A>=1){
        
        
       if(A%C!=0){ 
           
            contador++;
        
           
        v=A/C + contador;
        mon=A/C + contador;
        
        if(((float)(A%C)+mon)/C>1){ //checking if the rest of students + monitors will exceed one cars limit.
            contador2=1;
        }
        
        v=v+contador2;
        printf("%d\n", v);
       }
       else{
           v=A/C + 1;
           mon=A/C;
           v=v+mon/C;
           printf("%d\n", v);
           
       }
    }
    return 0;
}
