#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];  // max size 100
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int UB = n - 1;
    int value;

    cout << "Enter value after which to delete: ";
    cin >> value;

    // print original array
    cout << "Original Array: ";
    for(int i = 0; i <= UB; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // find the position of value
    int pos = -1;
    for(int i = 0; i <= UB; i++) {
        if(arr[i] == value) {
            pos = i;
            break;
        }
    }

    if(pos == -1) {
        cout << "Value not found in array!" << endl;
        return 0;
    }
    if(pos == UB) {
        cout << "No element exists after the given value!" << endl;
        return 0;
    }

    cout << "Deleting element next to " << value << ": " << arr[pos+1] << endl;

    // shift elements left
    for(int i = pos+1; i < UB; i++) {
        arr[i] = arr[i+1];
    }

    UB = UB - 1;  // reduce size

    // print after deletion
    cout << "Array after Deletion: ";
    for(int i = 0; i <= UB; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
