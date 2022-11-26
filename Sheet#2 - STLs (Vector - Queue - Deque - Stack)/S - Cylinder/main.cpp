#include <iostream>
#include<deque>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    deque<pair<long long int , long long int> >d;
    pair<long long int , long long int> pair1;
    int query = 0;
    long long int no_query = 0;
    long long int x = 0;
    long long int c = 0;

    cin>>no_query;
    for(long long int i = 0 ; i < no_query ; i++)
    {
        cin>>query;
        switch(query)
        {
            case 1:
                cin>>x>>c;
                pair1 = make_pair(x , c);
                d.push_back(pair1);
                break;
            case 2:
                long long int sum = 0;
                cin>>c;
                if(c <= d[0].second)
                {
                    sum = d[0].first*c;
                    d[0].second -= c;
                    if(d[0].second == 0)
                    {
                        d.pop_front();
                    }
                    cout<<sum<<endl;
                }
                else if(c > d[0].second)
                {
                    long long int cOld = d[0].second;
                    sum = d[0].first *cOld;
                    d.pop_front();
                    long long int cNew = c-cOld;
                    while(cNew != d[0].second)
                    {
                        sum += (d[0].first * cNew);
                        d[0].second -= cNew;
                        if(d[0].second == 0)
                        {
                            d.pop_front();
                        }
//                        //int z = 0;
//                        sum += d[0].first*(c-c1);
//                        //d[0].second -= c;
//                        //z++;
//                        c1 += c;
//                        //d.pop_front();
                    }
                    cout<<sum<<endl;
                }
                break;
        }
    }
    return 0;
}
