// Estêvão Sousa - 202210345
// Larissa de Brito - 202210349
// Davi Roriz - 202210342
// 1905 - COPS AND ROBBERS
#include <bits/stdc++.h>

using namespace std;

#define N 5

bool isValid(int maze[N][N], int x, int y) { // Verifica se naquela posição é corredor ou parede
    if (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 0) {
        return true;
    } else {
        return false;
    }
}

bool resolveLabirinto(int maze[N][N], int x, int y) {
    if(x == N - 1 && y == N - 1 && maze[x][y] == 0) { // Verifica se é a saída (último ponto do labirinto)
        return true;
    } else {
        if(isValid(maze, x, y) == true) {
            maze[x][y] = 2; // Marca como visistante
            if(resolveLabirinto(maze, x + 1, y)) { // 4 testes de if para cada uma das posições vizinhas
                return true;
            } else if(resolveLabirinto(maze, x - 1, y)) {
                return true;
            } else if(resolveLabirinto(maze, x, y + 1)) {
                return true;
            } else if(resolveLabirinto(maze, x, y - 1)) {
                return true;
            } else {
                maze[x][y] = 0; // Desmarca a posição caso não haja vizinhos para prosseguir
                return false;
            }
        } else {
            return false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for(int a = 0 ; a < T ; a++) { // Leitura do labirinto
        int maze[5][5];
        for (int i = 0 ; i < 5 ; i++) {
            for (int j = 0 ; j < 5 ; j++) {
                cin >> maze[i][j];
            }
        }
        if(resolveLabirinto(maze, 0 , 0)) { // Se o labirinto tiver solução, os policiais ganham, se não, os ladrões ganham
            cout << "COPS" << endl;
        } else {
            cout << "ROBBERS" << endl;
        }
    }
    return 0;
}