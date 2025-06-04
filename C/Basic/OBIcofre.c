#include <stdio.h>

int main(){
    
    int N, M, k=0;
    scanf("%d %d", &N, &M);
    int vetor[N], movimento[M], alg[10];
    for(int i=0;i<10;i++)alg[i]=0;
    for(int i=0;i<N;i++)scanf("%d", &vetor[i]);
    for(int i=0;i<M;i++)scanf("%d", &movimento[i]);
    
    for(int i=0;i<M-1;i++){
        
        if(movimento[i]<movimento[i+1])for(int j=(i==0? movimento[i]:movimento[i]+1);j<=movimento[i+1];j++)alg[vetor[j-1]]++;
        else if(movimento[i]>movimento[i+1])for(int j=(i==0? movimento[i]:movimento[i]-1);j>=movimento[i+1];j--)alg[vetor[j-1]]++;
    }
    printf("[");
    for(int i=0;i<10;i++)printf(" %d", alg[i]);
    printf(" ]\n");
    
    return 0;
}
