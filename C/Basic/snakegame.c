#include <stdio.h>



int main(){
    
    int N,X,Y,S, r;
    char C;
    
    scanf("%d %d %d %c %d", &N, &X, &Y, &C, &S);
    
    if(N>=0 && N<=1000 && X>=0 && X<=1000 && Y>=0 && Y<=1000 && S>=0 && S<=1000){
        
        r=S%N;
      switch(C){
          case 'U':
          Y=((Y-r)%N + N)%N;
          
          break;
          
          case 'D':
          Y=(Y+r)%N;
          
          break;
          
          case 'R':
          X=(X+r)%N;
          break;
          
          case 'L':
          X=((X-r)%N+N)%N;
          break;

        default:
        break;
      }
      printf("%d %d\n", X, Y);
    }
    return 0;
}
