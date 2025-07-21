#include <stack>
    #include <string>

    bool areBracketsBalanced(const std::string& expr) {
        std::stack<char> s;
        for (char c : expr) {
            if (c == '(' || c == '{' || c == '[') {
                s.push(c);
            } else if (c == ')' || c == '}' || c == ']') {
                if (s.empty()) return false;
                char top = s.top();
                s.pop();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return s.empty();
    }