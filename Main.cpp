class Solution {
public:
    bool isValid(string s) {
        stack<char> parentheses;
        for (char& c : s) {
            switch (c) {
                case '(':
                case '{':
                case '[': parentheses.push(c); break;
                case ')': if (parentheses.empty() || parentheses.top()!='(') return false; else parentheses.pop(); break;
                case '}': if (parentheses.empty() || parentheses.top()!='{') return false; else parentheses.pop(); break;
                case ']': if (parentheses.empty() || parentheses.top()!='[') return false; else parentheses.pop(); break;
                default: ; // pass
            }
        }
        return parentheses.empty();
    }
};
