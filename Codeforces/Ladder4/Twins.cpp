//Harsh Anand
// Problem link : - https://codeforces.com/problemset/problem/160/A
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
    int n ; cin >> n;
    vector <int> v(n);
    int sum = 0;
    for (int  i = 0; i < n; i++ ) {cin >> v[i]; sum = sum + v[i];}

    sort(v.begin(), v.end(), greater<int> ());
    int s = 0;

    for (int i = 0; i < n; i++) {s = s + v[i] ; if (s > (sum - s)) {cout << i + 1 << endl; return;} }



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





