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
    string str;
    getline(cin , str);
    set<char>s;
    for(int i  = 0 ; i < str.length() ; i++)
    {
        if(str[i] == '{' || str[i] == '}' || str[i] == ',' || str[i] == ' ')
        {
            continue;
        }
        else
        {
            s.insert(str[i]);
        }
    }
    cout<<s.size()<<endl;
    return 0;
}
