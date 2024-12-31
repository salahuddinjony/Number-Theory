#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to determine operator precedence
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

// Function to check if a character is an operator
bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

// Function to convert infix expression to postfix expression
string infixToPostfix(const string &infix) {
    stack<char> operators;
    string postfix;
    for (char c : infix) {
        if (isalnum(c)) {
            postfix += c; // Add operands directly to postfix expression
        } else if (c == '(') {
            operators.push(c); // Push '(' onto the stack
        } else if (c == ')') {
            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                operators.pop();
            }
            operators.pop(); // Remove '(' from the stack
        } else if (isOperator(c)) {
            while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
                postfix += operators.top();
                operators.pop();
            }
            operators.push(c); // Push the current operator
        }
    }
    // Pop remaining operators in the stack
    while (!operators.empty()) {
        postfix += operators.top();
        operators.pop();
    }
    return postfix;
}

// Function to generate three-address code from postfix expression
void generateThreeAddressCode(const string &postfix) {
    stack<string> st;
    int tempVarCount = 1;

    for (char c : postfix) {
        if (isalnum(c)) { // If operand, push it to the stack
            st.push(string(1, c));
        } else if (isOperator(c)) { // If operator
            string operand2 = st.top(); st.pop();
            string operand1 = st.top(); st.pop();
            string tempVar = "t" + to_string(tempVarCount++);
            cout << tempVar << " = " << operand1 << " " << c << " " << operand2 << endl;
            st.push(tempVar);
        } else if (c == '-') { // Handle unary minus
            string operand = st.top(); st.pop();
            string tempVar = "t" + to_string(tempVarCount++);
            cout << tempVar << " = -" << operand << endl;
            st.push(tempVar);
        }
    }
    // Final result assignment
    if (!st.empty()) {
        cout << "a = " << st.top() << endl;
    }
}

int main() {
    string infix;
    cout << "Enter an infix expression: ";
    cin >> infix;

    // Convert infix to postfix
    string postfix = infixToPostfix(infix);
    cout << "Postfix Expression: " << postfix << endl;

    // Generate three-address code
    cout << "Three-Address Code:" << endl;
    generateThreeAddressCode(postfix);

    return 0;
}