#include <iostream>
using namespace std;
#define ll long long

int main(){
    ll n, ori, res = 0;

    cin >> n;

    if(n%2 == 0) cout << n/2 << endl;
    else cout << -(n + 1)/2 << endl;

    return 0;
}

 /*
    Sum of even numbers till Nth number = N * (N + 1)
    Sum of odd numbers till Nth number = N^2

    here, N = n/2;

    if n is odd, our sum is = N *(N + 1) - (N + 1)*(N + 1)
                            = N^2 + N - N^2 - 2N - 1
                            = - N - 1 ???

    if n is even, our sum is = N* (N+1) - N^2
                             = N
*/
