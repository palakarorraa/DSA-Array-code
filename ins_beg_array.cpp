#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter size of array (max 20): ";
    cin >> size;

    int arr[20]; // thoda bada rakha taaki insertion me jagah ho
    int UB = size - 1;
    int LB = 0;
    int item, k;

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter item to insert at beginning: ";
    cin >> item;

    cout << "Original Array: ";
    for (int i = 0; i <= UB; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Shifting elements right side
    k = UB;
    while (k >= LB) {
        arr[k + 1] = arr[k];
        k = k - 1;
    }

    arr[LB] = item;
    UB = UB + 1;

    cout << "Array after Insertion: ";
    for (int i = 0; i <= UB; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
