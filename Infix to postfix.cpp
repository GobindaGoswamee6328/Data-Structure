

#include <iostream>
#include <stack>
#include <string>

using namespace std;

string infixToPostfix(string expression);

int hasPrecedence(char operator1, char operator2);

bool isOperator(char C);

bool isOperand(char C);

int main()
{
    string expression;
    cout<<"Enter Infix Expression \n";
    getline(cin,expression);
    string postfix = infixToPostfix(expression);
    cout<<"Output = "<<postfix<<"\n";

    return 0;
}

string infixToPostfix(string expression)
{
    stack<char> S;
    string postfix = "";
    for(int i = 0;i< expression.length();i++) {

        if(expression[i] == ' ' || expression[i] == ',') continue;

        else if(isOperator(expression[i]))
        {
            while(!S.empty() && S.top() != '(' && hasPrecedence(S.top(),expression[i]))
            {
                postfix+= S.top();
                S.pop();
            }
            S.push(expression[i]);
        }
        else if(isOperand(expression[i]))
        {
            postfix +=expression[i];
        }

        else if (expression[i] == '(')
        {
            S.push(expression[i]);
        }

        else if(expression[i] == ')')
        {
            while(!S.empty() && S.top() !=  '(') {
                postfix += S.top();
                S.pop();
            }
            S.pop();
        }
    }

    while(!S.empty()) {
        postfix += S.top();
        S.pop();
    }

    return postfix;
}

bool isOperand(char C)
{
    if(C >= '0' && C <= '9') return true;
    if(C >= 'a' && C <= 'z') return true;
    if(C >= 'A' && C <= 'Z') return true;
    return false;
}

bool isOperator(char C)
{
    if(C == '+' || C == '-' || C == '*' || C == '/' || C== '$')
        return true;

    return false;
}

int isRightAssociative(char op)
{
    if(op == '$') return true;
    return false;
}

int getWeight(char op)
{
    int weight = -1;
    switch(op)
    {
    case '+':
    case '-':
        weight = 1;
    case '*':
    case '/':
        weight = 2;
    case '$':
        weight = 3;
    }
    return weight;
}

int hasPrecedence(char op1, char op2)
{
    int op1Weight = getWeight(op1);
    int op2Weight = getWeight(op2);


    if(op1Weight == op2Weight)
    {
        if(isRightAssociative(op1)) return false;
        else return true;
    }
    return op1Weight > op2Weight ?  true: false;
}


