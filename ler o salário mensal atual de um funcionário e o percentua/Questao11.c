#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    float salario, reajuste, novo_salario;
    printf("Digite o sal�rio e o percentual de reajuste:\nSal�rio: R$");
    scanf("%f", &salario);
    printf("Rejuste: ");
    scanf("%f", &reajuste);
    novo_salario = salario + (salario * (reajuste / 100));
    printf("O novo sal�rio � R$%.2f", novo_salario);
    return 0;
}
