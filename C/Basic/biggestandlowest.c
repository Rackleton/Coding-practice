#include <stdio.h>
#include <stdlib.h>


/*
the goal of this code is to read 3 integers and input the highest number and the lowest number between them

taken from a exercise list from youtube channel "programe seu futuro" lesson 53


subject to changes
*/
int main(){

    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if(a>b){

        if(a>c && b>c){
            printf("%d\n%d\n", a, c );
        }
        if(a>c && b<c){
            printf("%d\n%d\n", a, b);
        }
        if(a<c){
            printf("%d\n%d\n", c, b);
        }
    }
    else if(b>a){
        if(b>c && a>c){
            printf("%d\n%d\n", b, c );
        }
        if(b>c && a<c){
            printf("%d\n%d\n", b, a);
        }
        if(b<c){
            printf("%d\n%d\n", c, a);
        }
    }

  
    return 0;
}
