#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\n=== Sistema de Gestão de Ocorrências Técnicas ===\n");
        printf("1. Inserir nova ocorrência\n");
        printf("2. Listar ocorrências\n");
        printf("3. Pesquisar ocorrência\n");
        printf("4. Alterar estado da ocorrência\n");
        printf("5. Guardar dados\n");
        printf("6. Carregar dados\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Inserir nova ocorrência.\n");
                break;
            case 2:
                printf("Listar ocorrências.\n");
                break;
            case 3:
                printf("Pesquisar ocorrência.\n");
                break;
            case 4:
                printf("Alterar estado da ocorrência.\n");
                break;
            case 5:
                printf("Guardar dados.\n");
                break;
            case 6:
                printf("Carregar dados.\n");
                break;
            case 0:
                printf("A sair do programa...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }

    } while (opcao != 0);

    return 0;
}
