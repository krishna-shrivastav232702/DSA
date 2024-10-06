#include <iostream>
#include <vector>
#include <limits> // For INT_MIN
using namespace std;

bool divide(vector<int> arr) {
    int prefix = 0, totalSum = 0, n = arr.size();

    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    for (int i = 0; i < n; i++) {
        prefix += arr[i];
        int ans = totalSum - prefix;

        if (ans == prefix) {
            return true; // Changed to return true for clarity
        }
    }
    return false; // Changed to return false for clarity
}

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    // Handle empty array case
    if (n <= 0) {
        cout << "Array size must be positive." << endl;
        return 0;
    }

    cout << "Enter the elements in the array: ";
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    bool result = divide(v);
    cout << (result ? "True" : "False") << endl; // Clearer output
    return 0;
}
