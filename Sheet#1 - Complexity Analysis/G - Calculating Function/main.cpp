#include <iostream>

using namespace std;

int main()
{
    long long int n = 0;
    cin>>n;
    if(n%2 == 0)
    {
        cout<<n/2;
    }
    else
    {
        cout<<((n+1)/2)*(-1);
    }
    return 0;
}
