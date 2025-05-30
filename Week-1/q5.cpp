#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
  public:
    bool isBalanced(string& k) {
        vector<char> st;
        for(char ch : k) {
            if(ch == '(' || ch == '{' || ch == '[') {
                st.push_back(ch);
            }
            else {
                if (st.empty()) return false;
                if ((ch == ')' && st.back() != '(') ||
                    (ch == '}' && st.back() != '{') ||
                    (ch == ']' && st.back() != '[')) {
                    return false;
                }
                st.pop_back();
            }
        }
        return st.empty();
    }
};

int main() {
    Solution sol;
    string input;
    cout << "Enter a bracket string: ";
    cin >> input;
    if (sol.isBalanced(input)) {
        cout << "Valid\n";
    } else {
        cout << "Invalid\n";
    }
    return 0;
}