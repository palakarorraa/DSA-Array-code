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
    int pos;

    cout << "Enter index to delete: ";
    cin >> pos;

    // print original array
    cout << "Original Array: ";
    for(int i = 0; i <= UB; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // check valid index
    if(pos < 0 || pos > UB) {
        cout << "Invalid index!" << endl;
        return 0;
    }

    cout << "Deleting element at index " << pos << ": " << arr[pos] << endl;

    // shift elements left
    for(int i = pos; i < UB; i++) {
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
