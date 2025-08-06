#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id, jogadores;
    char nome[100], genero[100];
    float valor;
}Jogo;

void salvar(Jogo *jogos, int *n, char *f){
    FILE *file=fopen(f,"w");
    if(file){
        for(int i=0;i<*n;i++){
            fprintf(file, "ID: %d\nNome: %s\nGenero: %s\nJogadores: %d\nValor: %.2f\n\n", jogos[i].id, jogos[i].nome, jogos[i].genero, jogos[i].jogadores, jogos[i].valor);
        }
        fclose(file);
        printf("Jogos salvos em %s\n", f);
    }
    else printf("Erro ao salvar no arquivo\n");
}
int id_atual=1;
int carregar(Jogo **jogos, char*f){
    FILE *file=fopen(f, "r");
    if(file){
       int qtd=0;
       Jogo *temp=NULL;
       while(!feof(file)){
        Jogo j;
        int r=fscanf(file, "ID: %d\nNome: %[^\n]\nGenero: %[^\n]\nJogadores: %d\nValor: %f\n\n", &j.id, j.nome, j.genero, &j.jogadores, &j.valor);
        if(r==5){
            temp=realloc(temp, (qtd+1) * sizeof(Jogo));
            temp[qtd++]=j;
        }
       }
       fclose(file);
       *jogos=temp;
       int maior_id=0;
       for(int k=0;k<qtd;k++) {
           if(temp[k].id>maior_id)maior_id=temp[k].id;
       }
       id_atual=maior_id+1;
       return qtd;
    }
    else printf("Erro ao carregar o arquivo\n");
}
Jogo* adicionar(Jogo *V,int *n){
    Jogo *temp=realloc(V, (*n+1)*sizeof(Jogo));
    if(temp==NULL){
        printf("Erro ao realocar memoria, nao foi possivel adicionar o jogo\n");
        return V;
    }
    V=temp;
    (*n)++;
    V[*(n)-1].id=id_atual++;
    printf("\nNome do jogo: ");
    scanf(" %99[^\n]", V[(*n)-1].nome);
    printf("\nGênero do jogo: ");
    scanf(" %99[^\n]", V[(*n)-1].genero);
    printf("\nJogadores: ");
    scanf(" %d", &V[*(n)-1].jogadores);
    printf("\nValor do jogo: ");
    scanf(" %f", &V[*(n)-1].valor);

    return V;
}
int encontrou;
Jogo* remover(Jogo *V, int *n, int id){
    encontrou=0;
    for(int i=0;i<*n;i++){
        if(id==V[i].id){
            for(int j=i;j<*n-1;j++){
                V[j]=V[j+1];
            }
            Jogo *temp=realloc(V,(*n-1)*sizeof(Jogo));
            if(temp==NULL){
                printf("Falha ao realocar memoria, nao foi possivel excluir o jogo\n");
                return V;
            }
            encontrou=1;
            V=temp;
            (*n)--;
            return V;
        }
    }
    return V;
}

int main() {
    char arquivo[]="jogos.txt";
    Jogo *jogos;
    int qtd = 0, op, i, j, id_busca, aux;
    jogos=malloc(0);

    while (1) {
        printf("\n----- MENU -----\n");
        printf("[1] - Listar jogos\n");
        printf("[2] - Adicionar jogo\n");
        printf("[3] - Editar jogo\n");
        printf("[4] - Remover jogo\n");
        printf("[5] - Salvar lista\n");
        printf("[6] - Carregar lista\n");
        printf("[7] - Encerrar programa\n");
        printf("Escolha uma opção: ");
        scanf(" %d", &op);

        if (op == 1) {
            if (qtd == 0) {
                printf("Nenhum jogo cadastrado.\n");
            } else {
                for (i = 0; i < qtd; i++) {
                    printf("\nID: %d\n", jogos[i].id);
                    printf("Nome: %s\n", jogos[i].nome);
                    printf("Gênero: %s\n", jogos[i].genero);
                    printf("Jogadores: %d\n", jogos[i].jogadores);
                    printf("Valor: R$ %.2f\n", jogos[i].valor);
                }
            }
        }
        else if (op == 2) {
            jogos=adicionar(jogos, &qtd);
        }
        else if (op == 3) {
            if (qtd == 0) {
                printf("Nenhum jogo cadastrado.\n");
            } else {
                printf("Digite o ID do jogo para editar: ");
                scanf(" %d", &id_busca);
                aux = 0;
                for (i = 0; i < qtd; i++) {
                    if (jogos[i].id == id_busca) {
                        printf("Novo nome: ");
                        scanf(" %[^\n]", jogos[i].nome);
                        printf("Novo gênero: ");
                        scanf(" %[^\n]", jogos[i].genero);
                        printf("Nova quantia de jogadores: ");
                        scanf(" %d", &jogos[i].jogadores);
                        printf("Novo valor: ");
                        scanf(" %f", &jogos[i].valor);
                        printf("Jogo atualizado.\n");
                        aux = 1;
                        break;
                    }
                }
                if (aux == 0) {
                    printf("Jogo não encontrado.\n");
                }
            }
        }
        else if (op == 4) {
            if (qtd == 0) {
                printf("Nenhum jogo cadastrado.\n");
            } else {
                printf("Digite o ID do jogo para remover: ");
                scanf(" %d", &id_busca);

                remover(jogos, &qtd, id_busca);
                if(encontrou)printf("Jogo removido.\n");
                else printf("Jogo nao encontrado\n");
                }
            }
            else if(op==5){
                salvar(jogos, &qtd, arquivo);
            }
            else if(op==6){
                qtd=carregar(&jogos, arquivo);
            }
        else if (op == 7) {
            printf("Encerrando o programa...\n");
            break;
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }
    return 0;
}
