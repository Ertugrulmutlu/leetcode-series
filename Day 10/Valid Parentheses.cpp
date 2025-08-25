class Solution {
public:
    bool isValid(string s) {
        stack<char> s_stack;
        for (auto c : s) {
            if (c == '(') {
                s_stack.push(')');
            }else if (c == '{') {
                s_stack.push('}');
            }else if (c == '[') {
                s_stack.push(']');
            }else {
                if (s_stack.empty() || s_stack.top() != c) {
                    return false;
                }
                s_stack.pop();
            }
        }
        return s_stack.empty();
    }
};
