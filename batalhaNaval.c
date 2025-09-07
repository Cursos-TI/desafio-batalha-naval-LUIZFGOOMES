#include <stdio.h>

int main() {
    printf("Desafio Novato!\n");

    // Nível Novato - Posicionamento dos Navios
    // Declara uma matriz bidimensional para representar o tabuleiro (5x5).
    int board[5][5];

    // Inicializa o tabuleiro com todos os valores 0 (água).
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            board[i][j] = 0;
        }
    }

    // Posiciona um navio vertical de comprimento 3 na coluna 2, começando na linha 1.
    // Coordenadas: (1, 2), (2, 2), (3, 2)
    board[1][2] = 1;
    board[2][2] = 1;
    board[3][2] = 1;

    // Posiciona um navio horizontal de comprimento 2 na linha 4, começando na coluna 0.
    // Coordenadas: (4, 0), (4, 1)
    board[4][0] = 1;
    board[4][1] = 1;

    // Exibe o tabuleiro para visualizar os navios.
    printf("Tabuleiro com os Navios Posicionados:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }

    // Exibe as coordenadas de cada parte dos navios.
    printf("\nCoordenadas dos Navios:\n");
    printf("Navio Vertical: (%d, %d), (%d, %d), (%d, %d)\n", 1, 2, 2, 2, 3, 2);
    printf("Navio Horizontal: (%d, %d), (%d, %d)\n", 4, 0, 4, 1);

    return 0;
}