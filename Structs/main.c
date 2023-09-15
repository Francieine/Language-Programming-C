//Em C, Structs são registros
//Exemplo  de aplicação de estruturas em Linguagem C

#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

struct PEDIDOS{ //declaração da (estrutura) "PEDIDOS", irá manipular a Struct

int formaDePagamento;
char telefone[15],nome[21],endereco[41];
float valor, taxaEntrega;
};

int main(){
struct PEDIDOS entrega;

setlocale(LC_ALL, "Portuguese");

//inicialização dos campos

printf("Digite o codigo da forma de pagamento: "1 - Dinheiro, 2 -Cartão:/n");
scanf("%i", &entrega.formaDePagamento);  

printf("Digite o nome do Cliente:");
fflush(stdin);
gets(entrega.nome);

printf("Digite o Endereço do Cliente:");
fflush(stdin);

gets(entrega.telefone:");
printf(Digite o valor do pedido:");

scanf("%f", &entrega.valor);
if (entrega.valor >= 30 && entrega.formaDePagamento == 1){
entrega.taxaEntrega = 0;
}
else{
entrega.taxaEntrega =  3.5;
printf("\nCliente: %s", entrega.nome);
printf("\nEndereço: %s", entrega.endereço);
printf("\nTelefone: %f", entrega.telefone);
printf("\nValor do pedido: %f", entrega.valor);
printf("\nTaxa de entrega: %f", entrega.taxaEntrega);

}

}
