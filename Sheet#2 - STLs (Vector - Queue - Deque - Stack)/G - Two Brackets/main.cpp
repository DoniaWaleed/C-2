#include <iostream>
#include <stack>
#include<string>
using namespace std;

int chk_brackets(string b)
{
    stack<char>sRound;
    stack<char>sSquare;
    int counter = 0;
    for(int i = 0 ; i < b.length() ; i++)
    {
        if(b[i] == '(' )
        {
            sRound.push(b[i]);
        }
        else if(b[i] == ')' )
        {
            if(!sRound.empty())
            {
                sRound.pop();
                counter ++;
            }
            else
            {
                continue;
            }
        }
        else if(b[i] == '[' )
        {
            sSquare.push(b[i]);
        }
        else if(b[i] == ']' )
        {
            if(!sSquare.empty())
            {
                sSquare.pop();
                counter ++;
            }
            else
            {
                continue;
            }
        }
    }
    return counter;
}

int main()
{
    int testCases = 0;
    cin>>testCases;
    string b;
    for(int i = 0 ; i < testCases ; i++)
    {
        cin>>b;
        cout<<chk_brackets(b)<<endl;
    }
    return 0;
}
