#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void BubbleSort(vector<int> &arr)
{
    int k = arr.size();
    
    for (int i = 0; i < k - 1; i++)
    {
        for (int j = 0; j < k - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
                swap(arr[j + 1], arr[j]);
        }
    }
}

int main()
{
    int n;
    cout << "Enter number of elements ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    BubbleSort(arr);
    cout << "After Sorting:";
    for (int num : arr)
        cout << " " << num;
    return 0;
}
