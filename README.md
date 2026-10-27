# Caixa Diário

Simulador de caixa eletrônico desenvolvido em C para a disciplina de Algoritmos e Pensamento Computacional. O sistema realiza operações bancárias básicas utilizando estruturas de controle e repetição, com foco em validação de dados.

## Funcionalidades

- Consulta de saldo atualizado.
- Depósito (com bloqueio de entradas nulas ou negativas).
- Saque (com validação de saldo insuficiente e regras de negócio).
- Resumo final da sessão detalhando o total movimentado e o saldo restante.
- Proteção contra entradas inválidas (caracteres não numéricos) para evitar falhas de execução.

## Como executar

1. Certifique-se de ter um compilador C instalado (como o GCC).
2. Baixe o arquivo `caixa.c`.
3. Abra o terminal na pasta do arquivo e compile o código:
   gcc caixa.c -o caixa
4. Execute o programa:
   ./caixa (ou caixa.exe no Windows)
