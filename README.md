## Tabela usando apenas if's

#include <stdio.h>

int main() {
    int codigo;
    
    while (1) {
        printf("Digite o código do cargo (entre 1 e 17): ");
        scanf("%d", &codigo);
        
        if (codigo >= 1 && codigo <= 17) {
            float salario;
            
            if (codigo == 1)
                salario = 9.00;
            else if (codigo == 2)
                salario = 6.25;
            else if (codigo == 3)
                salario = 8.04;
            else if (codigo == 4)
                salario = 8.58;
            else if (codigo == 5)
                salario = 15.60;
            else if (codigo == 6)
                salario = 22.90;
            else if (codigo == 7)
                salario = 5.00;
            else if (codigo == 8)
                salario = 3.20;
            else if (codigo == 9)
                salario = 10.30;
            else if (codigo == 10)
                salario = 10.40;
            else if (codigo == 11)
                salario = 10.29;
            else if (codigo == 12)
                salario = 10.68;
            else if (codigo == 13)
                salario = 16.54;
            else if (codigo == 14)
                salario = 2.46;
            else if (codigo == 15)
                salario = 6.05;
            else if (codigo == 16)
                salario = 9.10;
            else if (codigo == 17)
                salario = 7.31;
            
            printf("O salário para o cargo de código %d é: %.2f\n", codigo, salario);
        } else {
            printf("Código inválido! Digite um valor entre 1 e 17.\n");
        }
        
        char opcao;
        printf("Deseja fazer outra consulta? (S/N): ");
        scanf(" %c", &opcao);
        
        if (opcao == 'N' || opcao == 'n')
            break;
    }
    
    return 0;
}
