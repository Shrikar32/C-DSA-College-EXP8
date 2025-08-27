#include <iostream>
using namespace std;

int main() {
    int a, b, x, y;

    cout << "Enter rows of first matrix: ";
    cin >> a;
    cout << "Enter columns of first matrix: ";
    cin >> b;

    cout << "Enter rows of second matrix: ";
    cin >> x;
    cout << "Enter columns of second matrix: ";
    cin >> y;

    if (b != x) {
        cout << "Invalid conditions ";
    }

    int c[100][100], d[100][100], p[100][100];

    cout << "Enter elements of first matrix:"<<endl;
    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> c[i][j];
        }

    cout << "Enter elements of second matrix:"<<endl;
    for (int i = 0; i < x; ++i)
        for (int j = 0; j < y; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> d[i][j];
        }

    for (int i = 0; i < a; ++i)
        for (int j = 0; j < y; ++j) {
            p[i][j] = 0;
            for (int k = 0; k < b; ++k)
                p[i][j] += c[i][k] * d[k][j];
        }

    cout << "Product of the two matrices:"<<endl;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < y; ++j)
            cout << p[i][j] << "  ";
        cout << endl;
    }

    return 0;