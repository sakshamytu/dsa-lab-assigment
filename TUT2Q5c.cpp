#include <iostream>
using namespace std;

int main() {
    int n, k = 0;
    cout << "Enter size: ";
    cin >> n;

    int size = n * (n + 1) / 2;
    int lower[size];

    cout << "Enter " << size << " elements (row-wise):\n";
    for (int i = 0; i < size; i++) {
        cin >> lower[i];
    }

    cout << "Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j)
                cout << lower[i * (i + 1) / 2 + j] << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }
}
