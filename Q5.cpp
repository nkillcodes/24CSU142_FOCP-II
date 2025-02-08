#include <iostream>
using namespace std;

void rotate_matrix(int n);
void print_matrix(int arr[][100], int n);

int main() {
    int n;
    cout << "enter matrix size: ";
    cin >> n;
    rotate_matrix(n);
    return 0;
}

void rotate_matrix(int n) {
    int arr[100][100], rotated[100][100];

    cout << "enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rotated[j][n - i - 1] = arr[i][j];
        }
    }

    cout << "rotated matrix:\n";
    print_matrix(rotated, n);
}

void print_matrix(int arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
