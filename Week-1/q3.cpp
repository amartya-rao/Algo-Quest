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

        vector<int> a(n), b(n);
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        for(int i = 0; i < n; ++i)
            cin >> b[i];
            
        
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if((a[i] * b[j]) > (a[j] * b[i])) {
                    int temp_a = a[i];
                    a[i] = a[j];
                    a[j] = temp_a;
                    int temp_b = b[i];
                    b[i] = b[j];
                    b[j] = temp_b;
                }
            }
        }
        
        int l = 0;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            ans = ans + (l * b[i]);
            l = l + a[i];
        }
        
        cout << ans << '\n';
    }
    
    return 0;
}