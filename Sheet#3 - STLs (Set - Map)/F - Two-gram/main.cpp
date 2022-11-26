#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


pair<string, int> gramCounter(string str, string mx_word)
{
    int i = 0, counter = 0, sizee = 0;
    const char* arr = mx_word.c_str();
    size_t found = str.find(mx_word);

    while (found != string::npos)
    {
        found = str.find(arr, found + i);
        counter++;
        i++;
    }
    pair<string, int> p = make_pair(mx_word, counter - 1);
    return p;
}

vector<string> combinations(string word)
{
    int word_size = word.length();
    unordered_set<char> sett;
    for (int i = 0; i < word_size; i++)
    {
        sett.insert(word[i]);
    }

    vector<string> comb;
    set<int>::iterator itr1;
    set<int>::iterator itr2;

    string s;
    for (auto itr1 = sett.begin(); itr1 != sett.end(); itr1++)
    {
        s = *itr1;
        for (auto itr2 = sett.begin(); itr2 != sett.end(); itr2++)
        {
            s += *itr2;
            comb.push_back(s);
            s = *itr1;
        }
    }
    return comb;
}

int main()
{
    int n = 0;
    cin >> n;
    string word;
    cin >> word;
    unordered_map<string, int>gram_comb;
    vector<string>mainVec = combinations(word);
    /*
    for (int i = 0; i < mainVec.size(); i++) //printing comb vector
    {
        cout << mainVec[i] << endl;
    }
    cout << endl;
    */

    pair<string, int> pair1;
    //cout << "gram_comb map" << endl;
    for (int i = 0; i < mainVec.size(); i++)
    {
        pair1 = gramCounter(word, mainVec[i]);
        gram_comb.insert({ pair1.first , pair1.second });
    }
    /*for (auto it = gram_comb.begin(); it != gram_comb.end(); it++)//printing map
    {
        cout << it->first << " " << it->second << endl;
    }*/

    //getting the max comb freq in map
    auto mx = max_element(gram_comb.begin(), gram_comb.end(), [](const auto& x, const auto& y)
    {
        return x.second < y.second;
    });
    cout << mx->first;

    return 0;
}



