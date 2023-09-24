/*Passando estruturas para funcoes*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Exemplo de como é feita a passagem de parametro de uma Struct
struct ALUNO{
    int identificador;
    char nome[31];
    
};

void imprime(structALUNO aluno2){ //Aqui a struct declarada como ALUNO é utilizada como tipo de parametro
    printf ("identificador: %i\n", aluno2.identificador);
    printf ("Nome: %s\n", aluno2.nome);
}

int main()
{
structALUNO aluno1; //Aqui a struct declarada como ALUNO é utilizada como tipo da variavel aluno1 na funcao principal
printf("Digite o identificador do Aluno:");
scanf("%i", &aluno1.identificador);
printf("Digite o nome do Aluno:");
fflush(stdin);
gets(aluno1.nome);
imprime(aluno1);
}
