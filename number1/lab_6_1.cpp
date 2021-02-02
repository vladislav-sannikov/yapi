
/* Правильность скобочного выражения */

#include <iostream>
#include <stack>
#include <string>

using namespace std;

void check(string text)
{
    stack<char> mystack;

    bool res = true;

    for (int i = 0; i < text.length(); i++)
    {
        switch (text[i])
        {
        case '(':
        case '{':
        case '[':
            mystack.push(text[i]);
            break;
        case ')':
            if (!mystack.empty() && mystack.top() == '(')
                mystack.pop();
            else
                res = false;
            break;
        case '}':
            if (!mystack.empty() && mystack.top() == '{')
                mystack.pop();
            else
                res = false;
            break;
        case ']':
            if (!mystack.empty() && mystack.top() == '[')
                mystack.pop();
            else
                res = false;
            break;
        }
    }

    if (mystack.empty() && res == true)
        cout << "True" << endl;
    else
        cout << "False" << endl;
}

int main()
{

    string text;
    cin >> text;

    check(text);
    system("pause");
}
