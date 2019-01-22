#include <bits/stdc++.h>
using namespace std;

#define for(n,i) for(i = 0; i < n; i++)
#define ll long long
#define pb(n) push_back(n)
#define sort(v) sort(v.begine(), v.end())

int main(){
    int n, m, len = 0;
    cin >> n >> m;

    char grid[n][m];

    int i, j, ori;
    bool flag = false;
    for(n, i){
        for(n, j){
            cin >> grid[i][j];

            if(grid[i][j] == 'B' && !flag){
                flag = true;
                ori = i;
                len++;
            }

            if(flag && grid[i][j] == 'B') len++;
        }
    }

    //len = squares length

    return 0;
}
