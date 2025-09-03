#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int size = n * (n + 1) / 2;
    int upper[size];

    cout << "Enter " << size << " elements (row-wise):\n";
    for (int i = 0; i < size; i++) {
        cin >> upper[i];
    }

    cout << "Matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j)
                cout << upper[i * n - i * (i - 1) / 2 + (j - i)] << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }
}
