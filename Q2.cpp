#include <iostream>
using namespace std;

void reverse_array(int arr[], int size);
void find_second_largest_smallest(int arr[], int size);

int main() {
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverse_array(arr, n);
    find_second_largest_smallest(arr, n);

    return 0;
}

void reverse_array(int arr[], int size) {
    cout << "reversed array: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void find_second_largest_smallest(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "second smallest: " << arr[1] << endl;
    cout << "second largest: " << arr[size - 2] << endl;
}
