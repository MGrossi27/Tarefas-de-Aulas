#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float pagamento;
    char nome[10];
    printf("Digite seu nome e seu sal�rio e te darei um aumento de 10%% \nNome: ");
    scanf("%s", nome);
    printf("Sal�rio: ");
    scanf("%f", &pagamento);
    printf("Muito bem, %s. Seu novo salario � de R$%.2f", nome, pagamento * 1.1);
	return 0;
}
