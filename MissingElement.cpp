#include <iostream>
#include <vector>
using namespace std;

int findMissing(const vector<int> &arr, int n) {
    int sum = 0;
    for (int x : arr) sum += x;
    return n * (n + 1) / 2 - sum;
}

int main() {
    int n;
    cout << "Enter the value of n (range from 1 to n): ";
    cin >> n;

    vector<int> arr(n - 1);
    cout << "Enter " << n - 1 << " numbers from 1 to " << n << " (one number is missing): ";
    for (int i = 0; i < n - 1; cin >> arr[i++]);

    int missing = findMissing(arr, n);
    cout << "The missing number is: " << missing << endl;

    return 0;
}
