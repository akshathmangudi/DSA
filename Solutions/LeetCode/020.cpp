#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (!st.empty())
        {
            if (s[i] == ')' && st.top() == '(' ||
                s[i] == '}' && st.top() == '{' ||
                s[i] == ']' && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        else if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            return false;
        }
    }
    if (st.empty())
        return true;
    return false;
}