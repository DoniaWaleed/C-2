#include <iostream>

using namespace std;

int main()
{
    int a = 0 , b = 0 , c = 0;
    cin>>a>>b>>c;
    int ans = 0;
    for(int i = 1 ; i <= c ; i++)
    {
        ans = (c-(i*a))/b;
        if(((a*i) + (b*ans) == c) )
        {
            cout<<"Yes";
            return 0;
        }
        else if((a*i) + (b*ans) > c)
        {
            cout<<"No";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}
