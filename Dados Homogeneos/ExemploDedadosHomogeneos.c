Tratamento de dados homogeneos - vetores e matrizes

/*Exemplo de tratamento de dados homogeneos*/
int main(){
char nome[51], endereco[101]; /*dados do mesmo tipo char*/
setlocale(LC_ALL, "Portuguese");
printf("Digite o nome:");
gets(nome); /*a funcao gets faz a leitura de strings*/
printf("Digite o endereço completo:");
gets(endereco); /*a funcao gets faz a leitura de strings*/
printf("\nNome:%s\nEndereço: %s\n", nome, endereco);

}
