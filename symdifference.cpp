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
    vector<int> b(n2);
    for (int i = 0; i < n2; cin >> b[i++]);

    vector<int> symDiff;

    for (int i = 0; i < n1; i++) {
        bool inB = false, inRes = false;
        for (int j = 0; j < n2; j++) if (a[i] == b[j]) { inB = true; break; }
        for (int k = 0; k < symDiff.size(); k++) if (a[i] == symDiff[k]) { inRes = true; break; }
        if (!inB && !inRes) symDiff.push_back(a[i]);
    }

    for (int i = 0; i < n2; i++) {
        bool inA = false, inRes = false;
        for (int j = 0; j < n1; j++) if (b[i] == a[j]) { inA = true; break; }
        for (int k = 0; k < symDiff.size(); k++) if (b[i] == symDiff[k]) { inRes = true; break; }
        if (!inA && !inRes) symDiff.push_back(b[i]);
    }

    for (int i = 0; i < symDiff.size(); cout << symDiff[i++] << " ");
    cout << endl;
}
