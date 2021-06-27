//Harsh Anand
// Problem link : -https://codeforces.com/problemset/problem/112/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <math.h>
#include <cstring>
#include<unordered_map>
#define INT_MAX 1e9

using namespace std;
typedef long long ll;



printvector (vector <ll> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " ;
    }

    cout << endl ;
}



void printvector(vector<vector<char>> v, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " " ;
        }
        cout << endl;
    }
}



void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.length() ; i++)
    {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);

        if (c1 < c2) {cout << "-1" << endl; return;}
        else if (c1 > c2) {cout << "1" << endl; return;}
    }

    cout << "0" << endl;
    return;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE


    freopen("input.txt", "r", stdin);


    freopen("output.txt", "w", stdout);

#endif




    ll t = 1;
    //cin >> t;

    while (t--)
    {
        solve();

    }



    return 0;

}





