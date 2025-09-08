#include <iostream>
#include <vector>
using namespace std;

void mergeSorted(const vector<int> &arr1, const vector<int> &arr2) {
    int i = 0, j = 0;
    vector<int> merged;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) merged.push_back(arr1[i++]);
        else merged.push_back(arr2[j++]);
    }

    while (i < arr1.size()) merged.push_back(arr1[i++]);
    while (j < arr2.size()) merged.push_back(arr2[j++]);

    cout << "Merged sorted array: ";
    for (int x : merged) cout << x << " ";
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr1(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr2(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    

    mergeSorted(arr1, arr2);
    return 0;
}
