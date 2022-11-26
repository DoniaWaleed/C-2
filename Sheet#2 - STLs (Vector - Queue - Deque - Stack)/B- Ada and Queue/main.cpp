#include <iostream>
#include <vector>
#include <algorithm>
#include<string>

using namespace std;

int main()
{
    vector< long long int>vec;
    long long int t = 0;

    cin>>t;
    for(long long int i = 0 ; i < t ; i++)
    {
        int num = 0;
        string query;
        cin>>query;

        if(query == "back")
        {
            if(!vec.empty())
            {
                cout<<vec[vec.size()-1]<<"\n";
                vec.pop_back();
            }
            else
            {
                cout<<"No job for Ada?"<<"\n";
            }
        }
        else if(query == "front")
        {
            if(!vec.empty())
            {
                cout<<vec.front()<<"\n";
                vec.erase(vec.begin());
            }
            else
            {
                cout<<"No job for Ada?"<<"\n";
            }
        }
        else if(query == "reverse")
        {
//            vector<int>::iterator ptr_temp = vec.begin();
//            *vec.begin() = *vec.rbegin();
//            *vec.rbegin() = *ptr_temp;
            vector<long long int> v2 (vec.rbegin(),vec.rend());
            vec.swap(v2);

            for(int i = 0 ; i < vec.size() ; i++)
            {
                cout<<vec[i]<<" ";
            }
            cout<<"\n";
            //reverse(vec.begin() , vec.end());
        }
        else if(query == "push_back")
        {
            cin>>num;
            vec.push_back(num);
        }
        else if(query == "toFront")
        {
            cin>>num;
            vec.insert(vec.begin() , num);
        }
    }
    return 0;
}
