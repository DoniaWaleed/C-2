#include<iostream>
#include<unordered_map>
#include<deque>
#include<string>

using namespace std;

bool compare(string word1 , string word2)
{
    deque<int>d1;
    deque<int>d2;
    unordered_map<char , int>mp1;
    unordered_map<char , int>mp2;
    if(word1.length() == word2.length())
    {
        for(int i = 0 ; i < word1.length() ; i++)
        {
            auto it = mp1.find(word1[i]);
            if(it != mp1.end())
            {
                it->second++;
            }
            else
            {
                mp1.insert({word1[i] , 1});
            }
        }
        for(int i = 0 ; i < word2.length() ; i++)
        {
            auto it2 = mp2.find(word2[i]);
            if(it2 != mp2.end())
            {
                it2->second++;
            }
            else
            {
                mp2.insert({word2[i] , 1});
            }
        }

        for(auto i1 = mp1.begin() , i2 = mp2.begin()  ; i1 !=mp1.end() && i2 != mp2.end() ;  i1++,i2++)
        {
            d1.push_back(i1->second);
            d2.push_back(i2->second);
        }
         //bool check=true;
        for(int i=0;i<d1.size();i++)
        {
            if(d1.front()!=d2.front())
            {
                return false;
            }
            else
            {
                d1.pop_front();
                d2.pop_front();
            }
        }
        return true;
    }
}
int main()
{
    long long int testCases = 0;
    long long int counter = 0;
    cin>>testCases;
    string arr_s[testCases];
    for(int i = 0 ; i < testCases;  i++)
    {
        cin>> arr_s[i];
    }
    for(int i = 0 ; i < testCases;  i++)
    {
        for(int j = 0 ; j < testCases;  j++)
        {
            if(i != j)
            {
                if(compare(arr_s[i], arr_s[j]))
                {
                    counter++;
                }
            }
        }
    }
cout<<counter/2<<endl;

return 0;
}
