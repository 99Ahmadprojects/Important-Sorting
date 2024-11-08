#include <iostream>
using namespace std;

void bubblesort(int arr[], int n) {
    bool swap;
    for (int i = 0; i < n - 1; i++) {
        swap = false;
        
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap = true;
            }
        }
        
        if (!swap) {
            cout << "Array is already sorted. Stopping early at iteration " << i + 1 << ".\n";
            break;
        }

        cout << "After iteration " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
	int size = 9;
    int arr[size];
    cout << "Enter " << size <<" elements in the array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    bubblesort(arr, size);
    
    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
