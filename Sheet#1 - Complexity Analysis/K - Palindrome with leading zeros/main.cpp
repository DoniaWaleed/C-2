#include <iostream>
#include <cmath>
#include<string>
#include<cstring>
using namespace std;

bool chk_palindrome(long long int n)
{
    string s = to_string(n);
    bool check = false;
    for(int i = 0, j = s.length()-1 ; i < s.length()-1 && j >= 0 ; i++, j--)
    {
        if(s[i] == s[j])
        {
            check = true;
            continue;
        }
        else
        {
            check = false;
            break;
        }
    }

    return check;
}

int main()
{
    long long int n = 0;
    cin>>n;
    if(n < 10 && n != 0)
    {
        cout<<"Yes";
    }
    else if(chk_palindrome(n))
    {
        cout<<"Yes";
    }
    else if(n == 0 || n%10 == 0)
    {
        if(n == 0)
        {
            cout<<"Yes";
        }
        else
        {
            string s = to_string(n);
            bool chk = false;
            for(int i = s.length()-1 ; i >= 0 ; i--)
            {
                if(s[i] == '0' )
                {
                    continue;
                    chk = true;
                }
                else
                {
                    chk = false;
                    break;
                }
            }
            if(chk == true)
            {
                cout<<"Yes";
            }
            else
            {
                while(n%10 == 0)
                {
                    n=n/10;
                    if(n < 10)
                    {
                        cout<<"Yes";
                    }
                    else if(n%10 != 0)
                    {
                        if(chk_palindrome(n))
                        {
                            cout<<"Yes";
                            return 0;
                        }
                        else
                        {
                            cout<<"No";
                        }
                    }
                }
            }
        }
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
