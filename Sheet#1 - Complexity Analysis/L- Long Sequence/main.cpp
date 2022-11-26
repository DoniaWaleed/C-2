#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    long long int n = 0;
    cin>>n;
    long long int arr[n];
    long long int sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    long long int x = 0;
    cin>>x;
    long double ans = (x/static_cast<long double>(sum))*n;

    if(static_cast<long long int>(ans*10)%10 < 5)
    {
        cout<<static_cast<long long int>(round(ans)+1);
    }
    else
    {
        cout<<static_cast<long long int>(round(ans));
    }

    return 0;
}
