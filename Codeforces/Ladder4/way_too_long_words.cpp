// Harsh Anand
//Problem_link - http://codeforces.com/problemset/problem/71/A


#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <math.h>
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
    string s;
    cin >> s;

    if (s.length() > 10)
    {
        cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
    }

    else
        cout << s << endl;
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
    cin >> t;

    while (t--)
    {
        solve();

    }



    return 0;

}





