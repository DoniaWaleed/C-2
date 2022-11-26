#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    int n = 0 , m = 0;
    cin>>n>>m;
    map<string , string>dict;
    string word1 , word2;
    for(int i = 0 ; i < m ; i++)
    {
        cin>>word1>>word2;
        dict.insert({word1 , word2});
    }
    string arr[n];
    string arr2[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
        if(arr[i].length() < dict[arr[i]].length())
        {
            arr2[i] = arr[i];
        }
        else if(arr[i].length() == dict[arr[i]].length())
        {
            arr2[i] = arr[i];
        }
        else
        {
            arr2[i] = dict[arr[i]];
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}
