#include <iostream>
#include<deque>
#include<vector>
#include <stack>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    stack<long long int >s;
    long long int max_length = 0;
    string b;
    cin>>b;
    for(int i = 0 ; i < b.length() ; i++)
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
                max_length+=2;
            }
            else
            {
                continue;
            }
        }
    }
    cout<<max_length;
    return 0;
}
