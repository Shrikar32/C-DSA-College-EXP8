#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the matrix: ";
    cin >> n;
cout << "Matrix is  " << n << " x " << n << endl;
    int matrix[100][100];
    int a = 0, b = 0;  

    
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

   
    cout << "Matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; ++i) {
        a += matrix[i][i];
        b += matrix[i][n - i - 1];
    }


    cout << "Main Diagonal Sum (a): " << a << endl;
    cout << "Secondary Diagonal Sum (b): " << b << endl;

    
    int ds= a + b;
    if (n % 2 == 1) {
        cout << "Center element (" << matrix[n / 2][n / 2] << ") counted twice, subtracting once." << endl;
        ds -= matrix[n / 2][n / 2];
    }

    cout << "Total Diagonal Sum (adjusted): " << ds << endl;

    return 0;
}