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
    int item;

    cout << "Enter item to insert at the end: ";
    cin >> item;

    // print original array
    cout << "Original Array: ";
    for(int i = 0; i <= UB; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // insert at end
    arr[UB + 1] = item;
    UB = UB + 1;

    // print after insertion
    cout << "Array after Insertion: ";
    for(int i = 0; i <= UB; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
