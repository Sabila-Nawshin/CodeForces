#include <bits/stdc++.h>
using namespace std;

#define for(n) for(int i = 0; i < n; i++)
#define ll long long
#define pb(n) push_back(n)
#define sort(v) sort(v.begine(), v.end())

int main(){
    int n, m;

    cin >> n >> m;

    /*  n can at most be 1129. ceil(1129/9) = 126, so in case n is the biggest, the smallest a or b is 126 9's.
        m must at lest be 1. Sum of digits of (a+b) can be the smallest[=1] when a+b = 1 or 10 or or 1000000000.........

        since s(a) and s(b) must be bigger than n, in the worst case they have to be bigger than 126 9's.
        For s(a+b) to always be smaller than m(regardless of m's value), a+b must be something similar to 10000.......

        999999..........900000........0001 (126 9's, 125 0's then one 1) ---> s(a) = 1135(9*126 + 1) > 1129, which is bigger than the largest value of n. So s(a) > n
        +                99999........9999 (126 9's)  ----------------------> s(b) = 1134(9*126) > 1129, So s(b) > n.
       ----------------------------------------------
        100000...........................0 (10^252)   ----------------------> s(a + b) = 1(1 + 0*252)
    */

    for(126) cout << "9";
    for(125) cout << "0";
    cout << 1 << endl;

    for(126) cout << "9";
    cout << endl;

    return 0;
}
