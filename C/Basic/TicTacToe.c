#include <stdio.h>
#include <stdlib.h>

/*
this is the code for playing tic tac toe in a 3x3 board with 2 people.
*/

int checar_venceu(char jogo[3][3], char simbolo) {
    int counth = 0, countv = 0, countd1 = 0, countd2 = 0;
    for (int i = 0; i < 3; i++) {
        counth = 0;
        countv = 0;
        for (int j = 0; j < 3; j++) {
            if (jogo[i][j] == simbolo) counth++;
            if (jogo[j][i] == simbolo) countv++;
        }
        if (counth == 3 || countv == 3) return 1;
    }
    for (int i = 0, j = 0; i < 3 && j < 3; i++, j++) {
        if (jogo[i][j] == simbolo) countd1++;
    }
    if (countd1 == 3) return 1;
    for (int i = 2, j = 0; i >= 0 && j < 3; i--, j++) {
        if (jogo[i][j] == simbolo) countd2++;
    }
    if (countd2 == 3) return 1;
    return 0;
}

int vencedor(char jogo[3][3]) {
    if (checar_venceu(jogo, 'X')) return 1;
    else if (checar_venceu(jogo, 'O')) return 2;
    return 0;
}

int main() {
    char jogo[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            jogo[i][j] = ' ';
    int l, c, count = 0, continuar;
    for (int k = 0; k < 9; k++) {
        if (k == 0) {
            for (int i = 0; i < 3; i++) {
                if (i == 0) printf("  0 1 2");
                printf("\n%d", i);
            }
            printf("\n\n");
        }
        printf("Jogador X:");
        scanf("%d %d", &l, &c);
        while ((l >= 3 || l < 0 || c < 0 || c >= 3) || jogo[l][c] != ' ') {
            printf("\njogada invalida\n");
            printf("\nJogador X:");
            scanf("%d %d", &l, &c);
        }
        jogo[l][c] = 'X';
        count++;
        if (count == 9) {
            printf("\n\nDeu velha\n\n");
            printf("Jogar de novo?  1-Sim  2-Nao\n");
            scanf("%d", &continuar);
            if (continuar == 1) {
                for (int i = 0; i < 3; i++)
                    for (int j = 0; j < 3; j++)
                        jogo[i][j] = ' ';
                k = -1;
                count = 0;
                printf("\n");
                continue;
            } else {
                printf("\n\n");
                return 0;
            }
        }
        printf("\n\n");
        for (int i = 0; i < 3; i++) {
            if (i == 0) printf("  0 1 2");
            printf("\n%d", i);
            for (int j = 0; j < 3; j++)
                printf("%2c", jogo[i][j]);
        }
        printf("\n\n");
        if (vencedor(jogo) == 1) {
            printf("Jogador X venceu\n\n");
            printf("Jogar de novo?  1-Sim  2-Nao\n");
            scanf("%d", &continuar);
            if (continuar == 1) {
                for (int i = 0; i < 3; i++)
                    for (int j = 0; j < 3; j++)
                        jogo[i][j] = ' ';
                k = -1;
                count = 0;
                printf("\n");
                continue;
            } else {
                printf("\n\n");
                return 0;
            }
        }
        printf("Jogador O:");
        scanf("%d %d", &l, &c);
        while ((l >= 3 || l < 0 || c < 0 || c >= 3) || jogo[l][c] != ' ') {
            printf("\njogada invalida\n");
            printf("\nJogador O:");
            scanf("%d %d", &l, &c);
        }
        jogo[l][c] = 'O';
        count++;
        printf("\n\n");
        for (int i = 0; i < 3; i++) {
            if (i == 0) printf("  0 1 2");
            printf("\n%d", i);
            for (int j = 0; j < 3; j++)
                printf("%2c", jogo[i][j]);
        }
        printf("\n\n");
        if (vencedor(jogo) == 2) {
            printf("Jogador O venceu\n\n");
            printf("Jogar de novo?  1-Sim  2-Nao\n");
            scanf("%d", &continuar);
            if (continuar == 1) {
                for (int i = 0; i < 3; i++)
                    for (int j = 0; j < 3; j++)
                        jogo[i][j] = ' ';
                k = -1;
                count = 0;
                printf("\n");
                continue;
            } else {
                printf("\n\n");
                return 0;
            }
        }
    }
    return 0;
}
