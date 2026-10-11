
#include <iostream>
using namespace std;

// Swap using references
void swapUsingReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Swap using pointers
void swapUsingPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // 1. Swapping using references
    int x = 10, y = 20;

    cout << "Before reference swap: x = " << x
         << ", y = " << y << endl;

    swapUsingReference(x, y);

    cout << "After reference swap: x = " << x
         << ", y = " << y << endl;

    // 2. Swapping using pointers
    int p = 30, q = 40;

    cout << "\nBefore pointer swap: p = " << p
         << ", q = " << q << endl;

    swapUsingPointer(&p, &q);

    cout << "After pointer swap: p = " << p
         << ", q = " << q << endl;

    // 3. Dynamic memory allocation
    int *arr = new int[5];

    // Store values in the array
    for (int i = 0; i < 5; i++) {
        arr[i] = (i + 1) * 10;
    }

    // Display array values
    cout << "\nDynamic array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // 4. Release dynamically allocated memory
    delete[] arr;
    arr = nullptr;

    cout << "Dynamic memory released successfully."
         << endl;

    return 0;
}
