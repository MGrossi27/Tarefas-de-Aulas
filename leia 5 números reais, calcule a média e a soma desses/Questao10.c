#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float a, b, c, d, e, media, soma;
	printf("Digite 5 n�meros e calcularei a m�dia e a soma deles:\n1- ");
	scanf("%f", &a);
	printf("2- ");
	scanf("%f", &b);
	printf("3- ");
	scanf("%f", &c);
	printf("4- ");
	scanf("%f", &d);
	printf("5- ");
	scanf("%f", &e);
	soma = a + b + c + d + e;
	media = soma / 5;
	printf("A soma dos n�meros � %.2f e a m�dia � %.2f", soma, media);
	return 0;
}
