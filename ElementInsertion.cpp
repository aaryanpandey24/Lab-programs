#include <iostream>
#include <vector>
using namespace std;

void insert(vector<int> &arr, int k, int p)
{
    if (p < 1 || p > arr.size() + 1) 
    {
        cout << "Invalid position!" << endl;
        return;
    }

    int n = arr.size();
    arr.push_back(0);

    for (int i = n - 1; i >= p - 1; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[p - 1] = k;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, k, p;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number to insert and position: ";
    cin >> k >> p;

    insert(arr, k, p);
    return 0;
}
