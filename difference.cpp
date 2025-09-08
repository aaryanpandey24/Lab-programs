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
    vector<int> b(n2), diff;
    for (int i = 0; i < n2; cin >> b[i++]);

    for (int i = 0; i < n1; i++) {
        bool found = false;
        for (int j = 0; j < n2; j++)
            if (a[i] == b[j]) { found = true; break; }

        bool already_added = false;
        for (int k = 0; k < diff.size(); k++)
            if (a[i] == diff[k]) { already_added = true; break; }

        if (!found && !already_added)
            diff.push_back(a[i]);
    }

    for (int i = 0; i < diff.size(); cout << diff[i++] << " ");
    cout << endl;
}
