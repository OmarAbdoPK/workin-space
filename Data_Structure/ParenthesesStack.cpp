#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool arePair(char open, char close)
{
    if(open == '(' && close == ')')
        return true;
    else if(open == '{' && close == '}')
        return true;
    else if(open == '[' && close == ']')
        return true;
    else 
        return false;

}

bool areBalanced(string exp)
{
    stack<char> ex;
    for(size_t i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            ex.push(exp[i]);
        }

        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if(ex.empty() || !arePair(ex.top(), exp[i]))
            {
                return false;
            }
            else
                ex.pop();
        }
        
    } 
    if(ex.empty())
        return true;
    else 
        return false;
}

int main()
{
    string expr;
    cout << "Enter an Expression : ";
    cin >> expr;

    if(areBalanced(expr))
    {
        cout << "\nExpression is Right" << endl;
    }
    else
        cout << "\nExpression is wrong" << endl;

    return 0;
}