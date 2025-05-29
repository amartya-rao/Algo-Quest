#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int l = 0;
    long long sum = 0;
    int count = 0;
    for(int r = 0; r < n; ++r) {
        sum += a[r];
        while(sum > x) {
            sum -= a[l];
            ++l;
        }
        if(sum == x) {
            ++count;
        }
    }
    cout << count << '\n';

    return 0;
}