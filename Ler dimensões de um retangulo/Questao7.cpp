#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float comprimento, altura, area;
	printf("Digite o comprimento do ret�ngulo:\n");
	scanf("%f", &comprimento);
	printf("Agora digite a altura do ret�ngulo:\n");
	scanf("%f", &altura);
	area = comprimento * altura;
	printf("A �rea do ret�ngulo � %.2f", area);
	return 0;
}
