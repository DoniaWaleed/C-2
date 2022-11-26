#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

long long int BinarySearch(vector<pair<long long int , char> >v , long long int s , char c)
{
    long long int l = 0 , r = s-1 , m = l+(r-l)/2;
    while(r - l > 1)
    {
        if(v[m].second > c)
        {
            r = m;
        }
        else
        {
            l = m;
        }
        m = l+(r-l)/2;
        //cout<<endl<<" L = "<<l<<endl<<" R = "<<r<<endl<<" m = "<<m<<endl<<endl;
    }
    return m;
}

int main()
{
    vector<pair<long long int , char> >v;
    long long int testCases = 0;
    cin>>testCases;
    for(int i = 0 ; i < testCases ; i++)
    {
        long long int s = 0;
        char c;
        long long int FirstG = -1 , LastG = -1;
        string str;
        cin>>s>>c;
        cin>>str;
        for(long long int j = 0 ; j < s ; j++)
        {
            if(str[j] == 'g' && FirstG == -1)
            {
                FirstG = j;
                LastG = j;
            }
            else if(str[j] == 'g')
            {
                LastG = j;
            }
            pair<long long int , char>p = make_pair(j , str[j]);
            v.push_back(p);
        }
        long long int result = BinarySearch(v , s , c);
        cout<<"Result = "<<result<<endl;
        cout<<"FirstG = "<<FirstG<<" LastG = "<<LastG<<endl;
        if(LastG > result)
        {
            cout<<"minutes1 = "<<LastG - result<<endl;
        }
        else if(FirstG < result)
        {
            cout<<"minutes2 = "<<result - FirstG+1<<endl;
        }
        else if(FirstG == result)
        {
            cout<<"minutes3 = "<<0<<endl;
        }

    }
    return 0;
}
