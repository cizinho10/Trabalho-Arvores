#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "ABB.h"

void menu();

void menu_generica();

void menu_abb();

void menu_avl();
void insere_avl(Arvore a);
void remove_avl(Arvore a);

Aluno cria_aluno(char *nome, int idade, char *curso);
void libera_aluno(Aluno a);

int main() {
    setlocale(LC_ALL, "Portuguese");
    Arvore a = cria_vazia();
    menu();
    return 0;
}

void menu() {
    int opcao;
    printf("Selecione o tipo de arvore a ser usado: \n");
    printf("1 - �rvore gen�rica\n");
    printf("2 - �rvore de busca bin�ria\n");
    printf("3 - �rvore AVL\n");
    scanf("%d", &opcao);
    switch(opcao) {
    case 1:
        //system("cls");
        //menu_generica();
        break;
    case 2:
        //system("cls");
        //menu_abb();
        break;
    case 3:
        system("cls");
        menu_avl();
        break;
    default:
        printf("Opera��o inv�lida, saindo...\n");
        exit(0);
    }
}

void menu_avl() {
    int opcao;
    Arvore a = cria_arvore_avl();
    do {
        printf("1 - Inserir um ponto de rede\n");
        printf("2 - Remover um ponto de rede\n");
        printf("3 - Imprimir �rvore\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
        switch (opcao) {
        case 1:
            insere_avl(a);
            break;
        case 2:
            remove_avl(a);
            break;
        case 3:
            print_arvore_avl();
            break;
        case 0:
            libera_arvore_avl(a);
            exit(0);
        default:
            printf("Opera��o inv�lida, saindo...\n");
            libera_arvore_avl(a);
            exit(0);
        }
    } while (1);
    libera_arvore_avl(a);
}

void insere_avl(Arvore a) {
    system("cls");

}

void remove_avl(Arvore a) {

}

Aluno cria_aluno(char *nome, int idade, char *curso) {
    Aluno a = (Aluno) malloc(bytes_struct_dados());
    set_nome(a, nome);
    set_idade(a, idade);
    set_curso(a, curso);
    return a;
}

void libera_aluno(Aluno a) {
    free(a);
}
