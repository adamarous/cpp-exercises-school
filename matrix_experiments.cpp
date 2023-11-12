// Operating two matrices 3x3
#include <iostream>

using namespace std;

int main() {
    float matrix[2][3][3];
    float matrixSum[3][3];
    int row, column;

    // We'll ask the user for the two matrices we'll operate with
    for (int i=0; i<2; i++) {
        for (row=0; row<3; row++) {
            for (column=0; column<3; column++) {
                cout << "In the matrix " << i+1 << ", tell me the number for the row " << row+1 << " and the column " << column+1 << ": ";
                cin >> matrix[i][row][column];
            }
        }
    }

    // Operate with the matrices
    for (row=0; row<3; row++) {
        for (column=0; column<3; column++) {
            matrixSum[row][column] = matrix[0][row][column] + matrix[1][row][column];
        }
    }

    // We show the result of our work
    cout << "The sum matrix is " << endl;
    for (row=0; row<3; row++) {
        for (column=0; column<3; column++) {
            cout << matrixSum[row][column] << " ";
        }
        cout << endl;
    }

    return 0;
}