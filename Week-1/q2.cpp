#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a.begin(), a.end());

    int maxf = 1, curr = 1;
    for (int i = 1; i < n; ++i) {
        if (a[i] == a[i-1])
            curr++;
        else
            curr = 1;
        maxf = max(maxf, curr);
    }

    cout << maxf << endl;
    return 0;
}