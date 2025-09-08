#include <iostream>
#include <vector>
using namespace std;

void deleteElement(vector<int> &arr, int k)
{
    int n = arr.size();
    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
    {
        cout << "Element not found!" << endl;
        return;
    }

    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr.pop_back();

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number to delete: ";
    cin >> k;

    deleteElement(arr, k);
    return 0;
}
