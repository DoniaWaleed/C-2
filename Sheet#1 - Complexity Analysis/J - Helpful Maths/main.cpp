#include <iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i = 0 , j = s.length()-1 ; i < s.length()-1 && j >= 0; i+=2 , j-=2)
    {
        if(s[i] > s[j])
        {
            swap(s[i] , s[j]);
        }
        if(s[i] == s[j] && i != j)
        {
            while(s[i] == s[j] && i != j || s[i] > s[j])
            {
                if(s[i+2] > s[j])
                {
                    swap(s[i+2] , s[j]);
                    break;
                }
            }
        }
        if(s[i] == s[j] && i == j)
        {
            break;
        }
    }
    cout<<s;
    return 0;
}
