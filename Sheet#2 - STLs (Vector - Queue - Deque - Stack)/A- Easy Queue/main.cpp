#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue < long long int > q;
    long long int t = 0;

    cin>>t;
    for(long long int i = 0 ; i < t ; i++)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int query = 0;
        long long int num = 0;

        cin>>query;
        switch(query)
        {
            case 1:
                cin>>num;
                q.push(num);
                break;
            case 2:
                if(!q.empty())
                {
                    q.pop();
                }
                break;
            case 3:
                if(q.empty())
                {
                    cout<<"Empty!\n";
                }
                else
                {
                   cout<<q.front()<<"\n";
                }
                break;
        }
    }
    return 0;
}
