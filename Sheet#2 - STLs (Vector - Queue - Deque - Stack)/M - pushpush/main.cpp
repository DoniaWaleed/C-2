#include <iostream>
#include<deque>
#include<vector>
#include <stack>
#include<algorithm>

using namespace std;

int main()
{
    long long int n = 0;
    long long int value = 0;
    deque<long long int>deq;

    cin>>n;
    cin>>value;
    deq.push_back(value);
    bool chk = true;//push_back
    for(long long int i = 1 ; i < n ; i++)
    {
        cin>>value;
        if(chk == true)
        {
            deq.push_back(value);
            chk = false;
        }
        else
        {
            deq.push_front(value);
            chk = true;
        }
    }
    if(n%2 == 0)
    {
        reverse(deq.begin() , deq.end());
    }
    for(long long int i = 0 ; i < n ; i++)
    {
        cout<<deq[i]<<" ";
    }
    return 0;
}
