#include<stdio.h>
main(){
    
    char nome[35];
    char cpf[11];
    char matricula[10];
    char endereco[50];
    char curso[30];
    int periodo;

    printf("Digite o seu nome:");
    scanf("%s",nome);
    fflush(stdin);
    printf("\n Digite o seu CPF:");
    scanf("%s",cpf);
    fflush(stdin);
    printf("\n Digite sua matricula:");
    scanf("%s",matricula);
    fflush(stdin);
    printf("\n Digite seu endereco:");
    scanf("%s",endereco);
    fflush(stdin);
    printf("\n Digite o seu curso:");
    scanf("%s",curso);
    fflush(stdin);
    printf("\n Digite o seu periodo:");
    scanf("%d",periodo);
    fflush(stdin);

    printf("Seus dados sao:%s, %s, %s, %s, %s, %d", nome,cpf,matricula,endereco,curso,periodo);
}
