#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int dia;
    int mes;
    int ano;

}DataNas;

typedef struct
{
    DataNas dataNas;
    int idade;
    char sexo;
    char nome[100];

}Pessoa;

Pessoa lerPessoa(){

    Pessoa p;

    printf("Digite nome da pessoa!\n");
    scanf("%[^\n]", p.nome);

    printf("Digite idade da pessoa!\n");
    scanf("%d", &p.idade);
    scanf("%c");

    printf("Digite sexo da pessoa m ou f!\n");
    scanf("%c", &p.sexo);

    printf("Digite data de nascimento da pessoa!\n");
    scanf("%d %d %d", &p.dataNas.dia, &p.dataNas.mes, &p.dataNas.ano);


    return p;
}

void imprimiPessoa(Pessoa p)
{
    printf("\n");
    printf("Nome:%s\n", p.nome);
    printf("Idade:%d\n", p.idade);
    printf("Sexo:%c\n", p.sexo);
    printf("Data Nascimento:%d/%d/%d\n", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);
}

int main(){

    Pessoa pessoa;
    pessoa = lerPessoa();
    imprimiPessoa(pessoa);

    return 0;
}
