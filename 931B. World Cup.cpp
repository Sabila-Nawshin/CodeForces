#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;

    int power = 0;
    bool finl = true;
    if((a % 2 == 0 && b == a - 1) || (b % 2 == 0 && a == b - 1)) finl = false;

    while(true){
        n /= 2;
        if (n == 1) break;

        //do something here about the teams that might win and get selected.

        power++;
    }

    if(!finl) cout << power << endl;
    else cout << "Final!" << endl;


    return 0;
}


1 2 3 4 5 6 7 8
