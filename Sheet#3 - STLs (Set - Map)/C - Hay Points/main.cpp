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
    int mpSize = 0 , testCases = 0;
    cin>>mpSize>>testCases;
    map<string , long long int>mp;
    string word;

    long long int price = 0 , total_price = 0;
    for(int j = 0 ; j < mpSize ; j++)
    {
        cin>>word>>price;
        mp.insert({word , price});
    }
    for(int i = 0 ; i < testCases ; i++)
    {
        string desc;
        cin>>desc;
        while(desc != ".")
        {
            auto it = mp.find(desc);
            if(it != mp.end())
            {
                total_price += it->second;
            }
            cin>>desc;
        }
        cout<<total_price<<endl;
        total_price = 0;
    }

    return 0;
}
