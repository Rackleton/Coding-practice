#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
This code generates a random N digit password and test all the possibilities until finding it.
*/

int vetigual(int vet1[], int vet2[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (vet1[i] != vet2[i]) return 0;
    }
    return 1;
}

int main() {
    int N;
    srand(time(NULL));
    scanf("%d", &N);
    int senha[N], teste[N];
    unsigned long long int counter = 0;
    for (int i = 0; i < N; i++) {
        int dig = rand() % 10;
        senha[i] = dig;
        teste[i] = 0;
    }
    for (int i = 0; i < N; i++) printf("%d", senha[i]);
    printf("\n\n");
    int pos = N - 1;
    while (1) {
        counter++;
        if (vetigual(senha, teste, N)) {
            printf("A senha eh: ");
            for (int i = 0; i < N; i++) printf("%d", teste[i]);
            printf("\n\nO numero total de tentativas foi:%llu\n\n", counter);
            return 0;
        }
        pos = N - 1;
        while (teste[pos] >= 0) {
            if (teste[pos] < 9) {
                teste[pos]++;
                break;
            } else {
                teste[pos--] = 0;
            }
        }
    }
}
