#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];  // max size 100 le liya hai
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int UB = n - 1;
    int value, item;

    cout << "Enter the value after which to insert: ";
    cin >> value;
    cout << "Enter item to insert: ";
    cin >> item;

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

    // print original array
    cout << "Original Array: ";
    for(int i = 0; i <= UB; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // shifting elements to right
    int k = UB;
    while(k > pos) {
        arr[k+1] = arr[k];
        k = k - 1;
    }

    arr[pos+1] = item;  // insert after value
    UB = UB + 1;

    // print after insertion
    cout << "Array after Insertion: ";
    for(int i = 0; i <= UB; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
