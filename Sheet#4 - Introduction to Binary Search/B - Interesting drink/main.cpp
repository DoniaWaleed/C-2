#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long int BinarySearch(long long int q ,vector<long long int>v ,long long int vec_size)
{
    long long int l = 0 , r = vec_size-1 , m = l+(r-l)/2;
    //long long int index = 0;
    while(r-l > -1)
    {
        //cout<<"mid_1 = "<<m<<endl;
        if(q < v[m])
        {
            r = m - 1;
            //index = m;
            //cout<<"mid_less = "<<m<<endl;
        }
        else if(q > v[m])
        {
            l = m + 1;
            //index = m;
            //cout<<"mid_great = "<<m<<endl;
        }
        else if(q == v[m])
        {
            //index += 1;
            return m+1;
            //cout<<"mid_equal1 = "<<m<<endl;
            //break;
        }
        else if(l == r)
        {
            //index += 2;
            return m+2;
            //cout<<"mid_equal2 = "<<m<<endl;
            //break;
        }
        m = l+(r-l)/2;
    }
    return m;
}

int main()
{
    long long int Size;
    long long int query;
    long long int no_q;
    long long int pb;
    cin>>Size;
    vector<long long int>vec;
    for(int i = 0 ; i < Size ; i++)
    {
        cin>>pb;
        vec.push_back(pb);
    }
    sort(vec.begin() , vec.end());
    cin>>no_q;
//    cout<<endl<<"Sorted Vector: ";
//    for(auto it = vec.begin(); it !=vec.end() ; it++)
//    {
//        cout<<*it<<" ";
//    }
//    cout<<endl;
    for(int i = 0 ; i < no_q ; i++)
    {
        cin>>query;
        cout<<BinarySearch(query , vec , Size)<<endl;
        //cout<<endl<<"BS Result "<<i+1<<": "<<BinarySearch(query , vec , Size)<<endl;
    }

    return 0;
}
