#include <stdio.h>

#define SHIP1_LENGTH 4  // Comprimento do navio vertical
#define SHIP2_LENGTH 3  // Comprimento do navio horizontal

// Estrutura para representar um vetor bidimensional (coordenadas X e Y)
typedef struct {
    int x;
    int y;
} Vector2;

int main() {
    // Declaração dos vetores para guardar as coordenadas de cada parte dos navios
    Vector2 ship1[SHIP1_LENGTH];  // Navio vertical
    Vector2 ship2[SHIP2_LENGTH];  // Navio horizontal

    // Posição inicial (cabeça) do navio vertical
    Vector2 start1 = {2, 3};  // Exemplo: coluna 2, linha 3
    // Posiciona o navio verticalmente (incrementa Y)
    for (int i = 0; i < SHIP1_LENGTH; i++) {
        ship1[i].x = start1.x;
        ship1[i].y = start1.y + i;
    }

    // Posição inicial (cabeça) do navio horizontal
    Vector2 start2 = {5, 6};  // Exemplo: coluna 5, linha 6
    // Posiciona o navio horizontalmente (incrementa X)
    for (int i = 0; i < SHIP2_LENGTH; i++) {
        ship2[i].x = start2.x + i;
        ship2[i].y = start2.y;
    }

    // Exibição das coordenadas no console
    printf("Coordenadas do navio 1 (vertical):\n");
    for (int i = 0; i < SHIP1_LENGTH; i++) {
        printf("Parte %d: (X: %d, Y: %d)\n", i + 1, ship1[i].x, ship1[i].y);
    }

    printf("\nCoordenadas do navio 2 (horizontal):\n");
    for (int i = 0; i < SHIP2_LENGTH; i++) {
        printf("Parte %d: (X: %d, Y: %d)\n", i + 1, ship2[i].x, ship2[i].y);
    }

    return 0;
}
