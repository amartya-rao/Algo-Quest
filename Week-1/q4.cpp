#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n), even, odd;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (i % 2 == 0)
                even.push_back(a[i]);
            else
                odd.push_back(a[i]);
        }

        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        vector<int> sorted_a = a;
        sort(sorted_a.begin(), sorted_a.end());

        vector<int> new_even, new_odd;
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0)
                new_even.push_back(sorted_a[i]);
            else
                new_odd.push_back(sorted_a[i]);
        }

        if (even == new_even && odd == new_odd)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}