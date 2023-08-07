public class Solution {
    public boolean isValid(String s) {
        Stack<Character> parentheses = new Stack<>();
        for (char c : s.toCharArray()) {
            switch (c) {
                case '(':
                case '{':
                case '[': parentheses.push(c); break;
                case ')': if (parentheses.empty() || parentheses.pop()!='(') return false; break;
                case '}': if (parentheses.empty() || parentheses.pop()!='{') return false; break;
                case ']': if (parentheses.empty() || parentheses.pop()!='[') return false; break;
                default: ; // pass
            }
        }
        return parentheses.empty();
    }
}
