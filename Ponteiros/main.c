
//1)Na RAM que são armazenadas as variáveis que fazem parte dos nossos programas. 
//2) De fato, a memória RAM pode ser vista como um enorme vetor de bytes consecutivos.
//3)Cada um desses bytes ocupa uma posição bem determinada em memória, que é identificada por um número único que varia entre 0 e a totalidade de bytes que ocupam a memória RAM do computador.
//4) A constante simbólica NULL, quando colocada em um ponteiro, indica que ele não aponta para nenhuma variável.
//Exemplo: 
//int = 5, b =7;
//int *ptr = NULL;


#include <stdio.h>

int main()
{
   int valor = 27; // variavel que armazena na memoria o valor 27
   
   int *ptr; // declaração do ponteiro que irá apontar para a variavel
   
   ptr = &valor; //atribuindo o endereço da variavel "valor" ao ponteiro 
   
   //impressão na tela:
   
   printf("Conteudo da variavel valor: %d\n", valor);
    printf("Endereço da variavel valor: %d\n", &valor);
     printf("Conteudo do ponteiro ptr: %d\n", ptr);
   getch();
   return(0);
}
