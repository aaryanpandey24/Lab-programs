#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2;
    cout<< "Enter no. of elements and the elements themselves";
    cin >> n1;
    vector<int> a(n1);
    for (int i = 0; i < n1; cin >> a[i++]);
    cout<< "Enter no. of elements and the elements themselves";
    cin >> n2;
    vector<int> b(n2), inter;

    for (int i = 0; i < n2; cin >> b[i++]);

    for (int i = 0; i < n1; i++) {
        bool found_in_b = false, already_added = false;

        for (int j = 0; j < n2; j++)
            if (a[i] == b[j]) { found_in_b = true; break; }

        for (int k = 0; k < inter.size(); k++)
            if (a[i] == inter[k]) { already_added = true; break; }

        if (found_in_b && !already_added)
            inter.push_back(a[i]);
    }

    for (int i = 0; i < inter.size(); cout << inter[i++] << " ");
    cout << endl;
}
