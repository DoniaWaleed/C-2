#include <iostream>

using namespace std;

 int mod_remainder(long long int num)
 {
    int ret = 0;
    if(num < 5 && num%5 != 0)
    {
        ret = 5-num;
    }
    else if(num > 5 && num%5 != 0)
    {
        ret = 5-(num%5);
    }
    return ret;
 }

int main()
{
    long long int n = 0 , m = 0;
    long long int counter = 0;
    cin>>n>>m;
    //long long int arr_n[n];
    long long int arr[m] = {0};

    arr[0] = mod_remainder(n);
    for(long long int i = 1 ; i < m ; i++)
    {
        if(mod_remainder(n)+5 <= m)
        {
            arr[i] = mod_remainder(n)+5;
        }
        else
        {
            break;
        }
    }
    for(long long int i = 0 ; i < n ; i++)
    {
        if(arr[i] != 0 && (i+1 + arr[i]) % 5 == 0)
        {
            counter++;
        }
    }
//    for(long long int i = 0 , ; i < n ; i++)
//    {
//        if((arr_n[i]+arr[j]) % 5 == 0 && arr[j] != 0)
//        {
//            counter++;
//        }
//    }
//
//    long long int i = 1;
//    for(long long int j = mod_remainder(i); j <= m ; j+=5)
//    {
//        if((i+j) % 5 == 0 && j != 0)
//        {
//            counter++;
//        }
//    }
//
//    for(long long int i = 1 ; i <= n ; i++)
//    {
//        for(long long int j = mod_remainder(i); j <= m ; j+=5)
//        {
//            if((i+j) % 5 == 0 && j != 0)
//            {
//                counter++;
//            }
//        }
//    }
    cout<<counter<<endl;
    return 0;
}
