#include <iostream>
using namespace std;

void insertionsort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int element = arr[i];
        int j = i - 1;
        
        cout << "Before Iteration " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;

        while (j >= 0 && arr[j] < element) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = element;

        cout << "After Iteration " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
	int size = 5;
    int arr[size];
    cout << "Enter " << size << " elements for the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    insertionsort(arr, size);
    
    cout << "Sorted array in descending order: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
