#include <stdio.h>

typedef struct { // O typedef é pra flr q vai ter 3 "valores".
    int codigo;
    char cargo[50];
    float salario;
} Cargo;

void lerTabelaCargos(Cargo tabelaCargos[]) {
    tabelaCargos[0] = (Cargo){1, "Analista de Salários", 9.00};
    tabelaCargos[1] = (Cargo){2, "Auxiliar de Contabilidade", 6.25};
    tabelaCargos[2] = (Cargo){3, "Chefe de Cobrança", 8.04};
    tabelaCargos[3] = (Cargo){4, "Chefe de Expedição", 8.58};
    tabelaCargos[4] = (Cargo){5, "Contador", 15.60};
    tabelaCargos[5] = (Cargo){6, "Gerente de Divisão", 22.90};
    tabelaCargos[6] = (Cargo){7, "Escriturário", 5.00};
    tabelaCargos[7] = (Cargo){8, "Faxineiro", 3.20};
    tabelaCargos[8] = (Cargo){9, "Gerente Administrativo", 10.30};
    tabelaCargos[9] = (Cargo){10, "Gerente Comercial", 10.40};
    tabelaCargos[10] = (Cargo){11, "Gerente de Pessoal", 10.29};
    tabelaCargos[11] = (Cargo){12, "Gerente de Treinamento", 10.68};
    tabelaCargos[12] = (Cargo){13, "Gerente Financeiro", 16.54};
    tabelaCargos[13] = (Cargo){14, "Contínuo", 2.46};
    tabelaCargos[14] = (Cargo){15, "Operador de Micro", 6.05};
    tabelaCargos[15] = (Cargo){16, "Programador", 9.10};
    tabelaCargos[16] = (Cargo){17, "Secretária", 7.31};
}

void consultarCargo(Cargo tabelaCargos[], int codigo) {
    if (codigo < 1 || codigo > 17) {
        printf("Código de cargo inválido!\n");
        return;
    }else{
    Cargo cargo = tabelaCargos[codigo - 1];
    printf("Cargo: %s\n", cargo.cargo);
    printf("Salário: %.2f\n", cargo.salario);
    }
}

int main() {
    Cargo tabelaCargos[17];
    lerTabelaCargos(tabelaCargos);
    int codigo;
    
    while (1) { // Valor 1 é para tornar a condição sempre verdadeira, sendo assim, cria-se um loop
        printf("Digite o código de um cargo (1-17), caso queira encerrar o programa digite 0: ");
        scanf("%d", &codigo);
        
        if (codigo == 0) {
            break;
        }else{
        consultarCargo(tabelaCargos, codigo);
        }
    }
    
    return 0;
}