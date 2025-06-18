#include <iostream>
#include <stack>
using namespace std;

int evaluatePostfix(string expression) {
    stack<int> s;
    for (char ch : expression) {
        if (isdigit(ch)) {
            s.push(ch - '0');
        } else {
            int val1 = s.top(); s.pop();
            int val2 = s.top(); s.pop();
            switch (ch) {
                case '+': s.push(val2 + val1); break;
                case '-': s.push(val2 - val1); break;
                case '*': s.push(val2 * val1); break;
                case '/': s.push(val2 / val1); break;
            }
        }
    }
    return s.top();
}

int main() {
    string postfix = "231*+9-";
    cout << "Postfix Evaluation: " << evaluatePostfix(postfix) << endl;
    return 0;
}
