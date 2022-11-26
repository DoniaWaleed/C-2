#include <iostream>
#include<deque>
#include<vector>
#include <stack>
#include<algorithm>
#include<string>

using namespace std;

pair<bool, pair<int , int> > chk_brackets(string b)
{
    pair<bool, pair<int , int> >p;
    stack<char>sRound;
    int q_counter = 0; // ?
    int b_counter = 0; // ()
    bool chk = true;
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
            }
            else
            {
                chk = false;
                b_counter+=2;
                continue;
            }
        }
        else if(b[i] == '?' )
        {
            q_counter++;
        }

    }
    p.first = chk;
    p.second.first = q_counter;
    p.second.second = b_counter;
    return p;
}
int main()
{
    int testCases = 0;
    cin>>testCases;
    string b;
    for(int i = 0 ; i < testCases ; i++)
    {
        cin>>b;
        int l = b.length() - 1;
        //cout<<chk_brackets(b).second.first<<" "<<chk_brackets(b).second.second<<endl;
        if(chk_brackets(b).first == true && chk_brackets(b).second.first % 2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(chk_brackets(b).first == false && chk_brackets(b).second.first % 2==0 && chk_brackets(b).second.second % 2==0 && b[0] == '?' && b[l] == '?')
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
