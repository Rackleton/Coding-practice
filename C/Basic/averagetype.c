#include <stdio.h>
#include <stdlib.h>

/*
The goal of this code is to read 3 grades and the average type we are gonna do with those numbers. a for arithmetic average and p for weighted average.

taken from exercise list of yt channel "programe seu futuro" lesson 52.
*/
int main(){

    float a,b,c;
    printf("\ngrades: ");
    scanf(" %f %f %f ", &a, &b, &c);

    char average=getchar();

    switch(average){
        case 'a': 
        printf("\n%.2f\n\n", (a+b+c)/3);
        break;

        case 'p':
        printf("\n%.2f\n\n", (a*3+b*3+c*4)/10);
        break;

        default:
        printf("\ninvalid average type (only 'a' or 'p')\n\n");

    }
    return 0;
}
