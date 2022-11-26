#include<iostream>
#include<unordered_map>
#include<deque>
#include<string>
#include<stack>
using namespace std;

long long int add(long long int n)
{
    return n+1;
}

long long int for_n(long long int n)
{
    for(int i = 0 ; i < n ; i ++)
    {
        add(n);
    }
    return n;
}

int main()
{
    long long int testCases = 0;
    string command;
    stack<string>st;
    cin>>testCases;
    for(int i = 0 ; i < testCases ; i++)
    {
        getline(cin , command);
        st.push(command);
    }
    cout<<endl;
    for(int i = 0 ; i < testCases ; i++)
    {
        cin>>command;
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}
