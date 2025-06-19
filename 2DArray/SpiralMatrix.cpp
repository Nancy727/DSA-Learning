#include<iostream>
using namespace std;

void spiralMatrix(int matrix[][3], int n, int m) {
    int stRow = 0, stCol = 0;
    int eRow = n - 1, eCol = m - 1;
    while (stRow <= eRow && stCol <= eCol) {
        // Top row
        for (int j = stCol; j <= eCol; j++) {
            cout << matrix[stRow][j] << " ";
        }
        stRow++;
        
        // Right column
        for (int i = stRow; i <= eRow; i++) {
            cout << matrix[i][eCol] << " ";
        }
        eCol--;
        
        if (stRow <= eRow) {
            // Bottom row
            for (int j = eCol; j >= stCol; j--) {
                cout << matrix[eRow][j] << " ";
            }
            eRow--;
        }
        
        if (stCol <= eCol) {
            // Left column
            for (int i = eRow; i >= stRow; i--) {
                cout << matrix[i][stCol] << " ";
            }
            stCol++;
        }
    }
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = sizeof(matrix) / sizeof(matrix[0]);
    int m = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    
    spiralMatrix(matrix, n, m);
    return 0;
}
