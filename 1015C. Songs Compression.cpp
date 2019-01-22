#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define for(n) for(int i = 0; i < n; i++)
#define pb(n) push_back(n)
//#define sort(v) sort(v.begin(), v.end())
#define sort(v,cmp) sort(v.begin(), v.end(), cmp)

bool cmp(int a, int b){ return a > b;}

int main(){
    ll n, m, sum = 0, res = 0;
    vector<int> v;

    cin >> n >> m;

    for(n){
        int a, b;
        cin >> a >> b;

        v.pb(a-b);
        sum += a;
    }

    sort(v, cmp);

    for(n){
        if(sum <= m){
            cout << i << endl;
            return 0;
        }
        sum -= v.at(i);
    }

    if(sum <= m)
        cout << n << endl;
    else
        cout << "-1" << endl;

    return 0;
}
