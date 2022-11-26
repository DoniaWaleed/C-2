#include <iostream>
#include<deque>
#include<vector>
#include <stack>
#include<algorithm>
#include<string>

using namespace std;
vector<long long int> getMax(vector<string> operations)
{
    vector<long long int>vec;
    vector<long long int>vec1;
     long long int maxx1 = 0;
     long long int maxx2 = 0;
    for(long long int i = 0 ; i < operations.size() ; i++)
    {
        if(operations[i].length() >= 1)
        {
            if(operations[i][0] == '1')
            {
                //cout<<"--1--"<<endl;
                long long int pos = operations[i].find(" ");
                long long int sub = stoi(operations[i].substr(pos + 1));
                vec.push_back(sub);
                maxx2 = maxx1;
                maxx1 = max(maxx1 , sub);
                               // cout<<"--11--"<<endl;

            }
            else if(operations[i][0] == '2')
            {
                                //cout<<"--2--"<<endl;

                long long int p1=vec.back();
                vec.pop_back();
                //if(p1==maxx1)
                    maxx1 = maxx2;
                                 //cout<<"--22--"<<endl;


            }
            else if(operations[i][0] == '3')
            {
                                //cout<<"--3--"<<endl;

                vec1.push_back(maxx1);
                               // cout<<"--33--"<<endl;

            }
        }
    }
    return vec1;
}

int main()
{
    //vector<string> operations = {"1 97", "2", "1 20", "2" , "1 26" , "1 20" , "2" , "3" , "1 91" , "3"};
    //getMax(operations);
    return 0;
}
