
#include <iostream>
using namespace std;

int main() {
    int arr[10];

    cout << "Enter 10 numbers:" << endl;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int maximum = arr[0];
    int minimum = arr[0];

    for (int i = 1; i < 10; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }

        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    cout << "Maximum value: " << maximum << endl;
    cout << "Minimum value: " << minimum << endl;

    return 0;
}

