#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 0;
    string s;
    cin>>n>>s;
    int counter = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(s[i] == s[i+1])
        {
            counter++;
        }
    }
    cout<<counter;
    return 0;
}
