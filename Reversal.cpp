#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &arr)
{
   

    int n = arr.size();
    vector<int> ar1(n);
    int j= 0;
    for (int i = n-1; i >= 0; i--)
    {
        ar1[j] = arr[i];
    }


    for (int i = 0; i < arr.size(); i++)
    {
        cout << ar1[i] << " ";
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

    

    reverse(arr);
    return 0;
}
