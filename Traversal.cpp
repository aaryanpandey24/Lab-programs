#include<iostream>
#include <vector>
using namespace std;
int Traversal(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
       
        cout<< arr[i];
        cout<< "\n";
    }
    return 0;
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
