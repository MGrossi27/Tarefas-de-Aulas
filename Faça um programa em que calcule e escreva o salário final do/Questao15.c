#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    float salario_base, salario_final;
    int carros_vendidos;
    printf("Digite seu sal�rio base:\nSal�rio: R$");
    scanf("%f", &salario_base);
    printf("Agora digite a quantidade de carros vendidos:\nN� de Carros: ");
    scanf("%d", &carros_vendidos);
    salario_final = salario_base + (carros_vendidos * (0.05 * salario_base));
    printf("Seu sal�rio final � de R$%.2f", salario_final);
    return 0;
}
