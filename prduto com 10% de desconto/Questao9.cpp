#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float preco;
	printf("Digite o pre�o do eletrodom�stico:\n");
	scanf("%f", &preco);
	printf("O pre�o do eletrodom�stico com 10%% de desconto � R$%.2f", preco * 0.9);
	return 0;
}
