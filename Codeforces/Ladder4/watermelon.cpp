
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
    int w ;
    cin >> w;

    if (((w & 1) == 0) && (w > 2) )
        cout << "YES" << endl;

    else
        cout << "NO" << endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);






    ll t = 1;
    cin >> t;

    while (t--)
    {
        solve();

    }



    return 0;

}





