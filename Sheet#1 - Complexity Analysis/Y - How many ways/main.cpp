#include <iostream>

using namespace std;

int main()
{
    int n = 0, x = 0, sum = 0, counter = 0;

    while(cin>>n>>x)
    {
        if(n == 0 && x == 0)
        {
            return 0;
        }
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = i + 1 ; j <= n ; j++)
            {
                for(int k = j + 1 ; k <= n ; k++)
                {
                    sum = i + j + k;
                    if(sum == x)
                    {
                        counter++;
                        break;
                    }

                }

            }
        }
        cout<<counter<<endl;
        counter = 0;
    }
    return 0;
}
