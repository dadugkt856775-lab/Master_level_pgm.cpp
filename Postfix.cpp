#include <iostream>
#include <stack>
using namespace std;

int main() {
    string exp = "52+83-*";
    stack<int> st;

    for(char ch : exp) {
        if(isdigit(ch))
            st.push(ch - '0');
        else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();

            if(ch == '+') st.push(a + b);
            else if(ch == '-') st.push(a - b);
            else if(ch == '*') st.push(a * b);
            else if(ch == '/') st.push(a / b);
        }
    }

    cout << "Result = " << st.top();
}
