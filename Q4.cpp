#include <iostream>
using namespace std;

void generate_spiral_matrix(int n);
void print_matrix(int arr[][100], int n);

int main() {
    int n;
    cout << "enter matrix size: ";
    cin >> n;
    generate_spiral_matrix(n);
    return 0;
}

void generate_spiral_matrix(int n) {
    int arr[100][100];
    int num = 1;
    int top = 0, left = 0, bottom = n - 1, right = n - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) arr[top][i] = num++;
        top++;
        for (int i = top; i <= bottom; i++) arr[i][right] = num++;
        right--;
        for (int i = right; i >= left; i--) arr[bottom][i] = num++;
        bottom--;
        for (int i = bottom; i >= top; i--) arr[i][left] = num++;
        left++;
    }

    print_matrix(arr, n);
}

void print_matrix(int arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
