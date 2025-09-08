#include<iostream>
using namespace std
void Traversal(vector<int> &arr)
{
    for (int i = 0; i < arr.size; i++)
    {
        /* code */
        cout<< arr[i];
        cout<< "\n";
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
    Traversal(arr);
}