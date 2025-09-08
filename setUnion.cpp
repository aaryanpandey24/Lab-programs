#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2, x;
    cout<< "Enter no. of elements and the elements themselves";
    cin >> n1;
    vector<int> a(n1), u;
    for (int i = 0; i < n1; cin >> a[i++]);
    cout<< "Enter no. of elements and the elements themselves";
    cin >> n2;
    vector<int> b(n2);
    for (int i = 0; i < n2; cin >> b[i++]);

    for (int i = 0; i < n1; i++) {
        bool f = false;
        for (int j = 0; j < u.size(); j++)
            if (a[i] == u[j]) { f = true; break; }
        if (!f) u.push_back(a[i]);
    }

    for (int i = 0; i < n2; i++) {
        bool f = false;
        for (int j = 0; j < u.size(); j++)
            if (b[i] == u[j]) { f = true; break; }
        if (!f) u.push_back(b[i]);
    }

    for (int i = 0; i < u.size(); cout << u[i++] << " ");
    cout << endl;
    return 0;
}
