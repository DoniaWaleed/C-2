#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>


using namespace std;


string del_frst(string str)
{
    string new_str = str.substr(1);
    return new_str;
}

string del_last(string str)
{
    string new_str = str.substr(0,str.length()-1);
    return new_str;
}


int main()
{
//    string test = "test";
//    cout<<del_frst(test)<<endl;
//    cout<<del_last(test);
    int testCases = 0 , counter = 0;
    cin>>testCases;
    string a , b;
    for(int i = 0 ; i < testCases ; i++)
    {
        cin>>a>>b;
        if(a == b)
        {
            cout<<"0"<<endl;
        }
        else if(a.length() > b.length())
        {

        }
    }
    return 0;
}
