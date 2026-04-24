class Solution {

public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {

            // opening brackets
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            else {
                // stack empty → invalid
                if (st.empty()) return false;

                // check matching
                if ((c == ')' && st.top() != '(') ||
                    (c == '}' && st.top() != '{') ||
                    (c == ']' && st.top() != '[')) {
                    return false;
                }

                st.pop(); // matched
            }
        }

        return st.empty(); // all matched
 

    }
};
