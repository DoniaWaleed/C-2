#include <iostream>

using namespace std;

int main()
{
    int n = 0, a = 0, b = 0, c = 0;
    int k = 0 , result = 0;
    cin>>n>>a>>b>>c;
    for(int i = 0 ; i <= n ; i++)
    {
        for(int j = 0 ; j <= n ; j++)
        {
            if((n-i*a-j*b) <= 0 || (n-i*a-j*b) % c == 0)
            {
                k = (n-i*a-j*b)/c;
                result = max(result, i + j + k);
            }
        }
    }
    cout<<result;
    return 0;
}
