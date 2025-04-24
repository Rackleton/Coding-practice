#include <stdio.h>
#include <stdlib.h>
int main() {
 
 
    int a,b,c,d,e, pc=0, nc=0, zc=0; 
    printf("Type 5 integer numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if(a<0){
       nc++;
    }
    else if(a==0)
        zc++;

    if(b<0){
        nc++;
    }
    else if(b==0)
        zc++;

    if(c<0){
        nc++;
    }
    else if(c==0)
        zc++;

    if(d<0){
        nc++;
    }
    else if(d==0)
    zc++;

    if(e<0){
    nc++;
    }
    else if(e==0)
        zc++;

    pc=5-nc-zc;

    printf("\n\nnumber of positive numbers:%d\nnumber of negative numbers:%d\nnumber of zero's:%d\n", pc, nc, zc );



    return 0;
}
