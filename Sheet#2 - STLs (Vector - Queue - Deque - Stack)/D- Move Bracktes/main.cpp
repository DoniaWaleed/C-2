#include <iostream>
#include<deque>
#include<vector>
#include <stack>
#include<algorithm>
#include<string>

using namespace std;

pair<bool, int> chk_brackets(string b , int length)
{
    pair<bool, int>p;
    bool chk = true;
    int counter = 0;
    stack<int>s;
    for(int i = 0 ; i < length ; i++)
    {
        if(b[i] == '(' )
        {
            s.push(b[i]);
        }
        else if(b[i] == ')' )
        {
            if(!s.empty())
            {
                s.pop();
            }
            else
            {
                chk = false;
                counter ++;
                continue;
            }
        }
        p.first = chk;
        p.second = counter;
    }
    return p;
}

int main()
{
    int testCases = 0;
    cin>>testCases;
    for(int i = 0 ; i < testCases ; i++)
    {
        int b_length = 0;
        string b;
        cin>>b_length>>b;
        cout<<chk_brackets(b , b_length).second<<endl;
    }
    return 0;
}
