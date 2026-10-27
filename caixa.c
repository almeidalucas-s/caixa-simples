#include <stdio.h>

int main() {
    // menu
    int opcao = -1;
    int c;  // limpeza de campo 

    // Dados da conta
    double saldo = 1000.00;       // saldo base definido internamente
    double valor = 0.0;           // valor digitado em cada operacao
    double totalDepositado = 0.0; // acumulador para o resumo final
    double totalSacado = 0.0;     // acumulador para o resumo final

    // Cabecalho 
    printf("==========================================\n");
    printf("        CAIXA DIARIO\n");
    printf("==========================================\n");

    // Proposito 
    printf("Simulador para consultar saldo, depositar\n");
    printf("e sacar dinheiro de forma rapida e segura.\n");
    printf("------------------------------------------\n");

    // Saudacao 
    printf("Ola! Seja bem-vindo(a). Como podemos ajudar?\n");
    printf("==========================================\n\n");

    // Laco 
    do {
        printf("-------------- MENU --------------\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("0 - Sair\n");
        printf("----------------------------------\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("\nEntrada invalida! Digite apenas numeros.\n\n");
            while ((c = getchar()) != '\n' && c != EOF);
            opcao = -1;
            continue;
        }
        printf("\n");

        switch (opcao) {
            case 1:
                printf("Saldo atual: R$ %.2f\n", saldo);
                break;

            case 2:
                printf("Valor do deposito: R$ ");
                if (scanf("%lf", &valor) != 1) {
                    printf("Entrada invalida! Digite apenas numeros.\n");
                    while ((c = getchar()) != '\n' && c != EOF);
                } else if (valor > 0) {
                    saldo = saldo + valor;
                    totalDepositado = totalDepositado + valor;
                    printf("Deposito realizado! Novo saldo: R$ %.2f\n", saldo);
                } else {
                    printf("Valor invalido! Digite um valor maior que zero.\n");
                }
                break;

            case 3:
                printf("Valor do saque: R$ ");
                if (scanf("%lf", &valor) != 1) {
                    printf("Entrada invalida! Digite apenas numeros.\n");
                    while ((c = getchar()) != '\n' && c != EOF);
                } else if (valor <= 0) {
                    printf("Valor invalido! Digite um valor maior que zero.\n");
                } else if (valor > saldo) {
                    // regra do bonus: impede saque maior que o saldo
                    printf("Saldo insuficiente! Seu saldo e R$ %.2f\n", saldo);
                } else {
                    saldo = saldo - valor;
                    totalSacado = totalSacado + valor;
                    printf("Saque realizado! Novo saldo: R$ %.2f\n", saldo);
                }
                break;

            case 0:
                printf("Encerrando o sistema...\n");
                break;

            default:
                printf("Opcao invalida! Escolha 0, 1, 2 ou 3.\n");
        }

        printf("\n");

    } while (opcao != 0);

    // Mensagem de encerramento 
    printf("==========================================\n");
    printf("            RESUMO DA SESSAO\n");
    printf("==========================================\n");
    printf("Total depositado: R$ %.2f\n", totalDepositado);
    printf("Total sacado:     R$ %.2f\n", totalSacado);
    printf("Saldo final:      R$ %.2f\n", saldo);
    printf("------------------------------------------\n");
    printf("Obrigado por usar o Caixa Diário!\n");
    printf("Ate breve!\n");
    printf("==========================================\n");

    return 0;
}