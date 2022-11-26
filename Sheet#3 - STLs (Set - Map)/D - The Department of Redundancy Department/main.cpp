#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<long long int , long long int>mp;
    string s;
    getline(cin , s);
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] == ' ')
        {
            continue;
        }
        else
        {
            auto it = mp.find(s[i]);
            if(it != mp.end())
            {
                it->second++;
            }
            else
            {
                mp.insert({s[i] , 1});
            }
        }
    }
   stack<pair<long long int , long long int> > stack1;
   pair<long long int , long long int>pair1;

    for (auto it = mp.begin(); it != mp.end(); it++)//printing map
    {
        pair1 = make_pair(static_cast<int>(it->first)-48 , it->second);
        stack1.push(pair1);
    }
    while(!stack1.empty())
    {
        cout<<stack1.top().first << " "<<stack1.top().second<<endl;
        stack1.pop();
    }
    return 0;
}
