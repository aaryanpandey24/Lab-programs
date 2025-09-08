#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cout<< "Enter no. of elements and the elements themselves";
    int n; cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    sort(arr.begin(), arr.end());

    cout << "Repeated elements: ";
    bool repeatedFound = false;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i-1]) {
            cout << arr[i] << " ";
            repeatedFound = true;
            while (i < n && arr[i] == arr[i-1]) i++;  
        }
    }
    if (!repeatedFound) cout << "None";

    cout << "\nUnique elements: ";
    for (int i = 0; i < n; i++) {
        if ((i == 0 || arr[i] != arr[i-1]) && (i == n-1 || arr[i] != arr[i+1]))
            cout << arr[i] << " ";
    }

    cout << "\n";
    return 0;
}
