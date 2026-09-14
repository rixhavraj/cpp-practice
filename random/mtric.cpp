#include <iostream>

using namespace std;

// Function to multiply two matrices and store result in third matrix
void multiplyMatrix(int A[3][3], int B[3][3], int result[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Initialize matrices A and B
    int A[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    int B[3][3] = {{10, 11, 12},
                   {13, 14, 15},
                   {16, 17, 18}};

    // Initialize result matrix
    int result[3][3];

    // Multiply matrices A and B and store in result
    multiplyMatrix(A, B, result);

    // Print the result matrix
    cout << "Resultant Matrix:\n";
    printMatrix(result);

    return 0;
}