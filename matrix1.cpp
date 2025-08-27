
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the number of rows: "<<endl;
    cin >> a;
    cout << "Enter the number of columns:"<<endl;
    cin >> b;
    int matrix[56][46]; 
    cout << "Enter the elements of the matrix:" << endl;
    for(int i = 0; i < a; ++i) {
        for(int j = 0; j < b; ++j) {
            cout << "Element  [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    cout << "\nThe matrix is:" << endl;
    for(int i = 0; i <a; ++i) {
        for(int j = 0; j < b; ++j) {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
}
/* OUTPUT:
Enter the number of rows: 
2
Enter the number of columns:
3
Enter the elements of the matrix:
Element  [0][0]: 2
Element  [0][1]: 43
Element  [0][2]: 5
Element  [1][0]: 6
Element  [1][1]: 7
Element  [1][2]: 4

The matrix is:
2  43  5
6  7  4
*/