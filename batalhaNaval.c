#include <stdio.h>

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Declare a 5x5 board. We'll use 0 for water and 1 for a ship.
    int board[5][5];

    // Initialize the board with all zeros (empty water).
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            board[i][j] = 0;
        }
    }

    // Place a vertical ship of length 3 at column 2, starting at row 1.
    // Coordinates: (1, 2), (2, 2), (3, 2)
    board[1][2] = 1;
    board[2][2] = 1;
    board[3][2] = 1;

    // Place a horizontal ship of length 2 at row 4, starting at column 0.
    // Coordinates: (4, 0), (4, 1)
    board[4][0] = 1;
    board[4][1] = 1;

    // Display the board to visualize the ships.
    printf("Tabuleiro com os Navios Posicionados:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }

    // Display the coordinates of each ship part.
    printf("\nCoordenadas dos Navios:\n");
    // Find and print coordinates for the vertical ship.
    printf("Navio Vertical: (%d, %d), (%d, %d), (%d, %d)\n", 1, 2, 2, 2, 3, 2);
    // Find and print coordinates for the horizontal ship.
    printf("Navio Horizontal: (%d, %d), (%d, %d)\n", 4, 0, 4, 1);

    return 0;
}