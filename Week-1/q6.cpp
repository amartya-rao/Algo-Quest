#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
  public:
    int maxLength(string &s) {
        int best = 0;
        vector<int> st;
        st.reserve(s.size());
        st.push_back(-1);

        for(int i = 0; i < (int)s.size(); ++i) {
            if(s[i] == '(') {
                st.push_back(i);
            }
            else {
                st.pop_back();
                if(st.empty()) {
                    st.push_back(i);
                }
                else {
                    best = max(best, i - st.back());
                }
            }
        }
        return best;
    }
};

int main() {
    Solution sol;
    string s;
    cout << "Enter a string of parentheses: ";
    cin >> s;
    int result = sol.maxLength(s);
    cout << "Longest valid parentheses length: " << result << endl;
    return 0;
}