#include <iostream>
#include <vector>
using namespace std;

void insertSorted(vector<int> &arr, int k)
{
    int n = arr.size();
    arr.push_back(0);
    int i = n - 1;
    while (i >= 0 && arr[i] > k)
    {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = k;
    for (int j = 0; j < arr.size(); j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
}

int main()
{
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number to insert: ";
    cin >> k;

    insertSorted(arr, k);
    return 0;
}
