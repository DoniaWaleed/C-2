#include <iostream>
#include<deque>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    bool turn = 0; // 0 == sereja's turn
    int n = 0;
    cin>>n;
    deque<int>deq;
    int card = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>card;
        deq.push_back(card);
    }
    long long int s_sum = 0 , d_sum = 0;
    while(!deq.empty())
    {
        if(turn == false)
        {
            if(deq.front() > deq.back())
            {
                s_sum += deq.front();
                deq.pop_front();
                turn = true;
            }
            else
            {
                s_sum += deq.back();
                deq.pop_back();
                turn = true;
            }
        }
        else if(turn == true)
        {
            if(deq.front() > deq.back())
            {
                d_sum += deq.front();
                deq.pop_front();
                turn = false;
            }
            else
            {
                d_sum += deq.back();
                deq.pop_back();
                turn = false;
            }
        }
    }
    cout<<s_sum<<" "<<d_sum;
    return 0;
}
