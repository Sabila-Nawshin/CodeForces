#include <bits/stdc++.h>

#define for(n) for(int i = 0; i < n; i++)

using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.length() - 1;
    for(n){
        if(s.at(i) != 'a' && s.at(i) != 'o' && s.at(i) != 'u' && s.at(i) != 'i' && s.at(i) != 'e' && s.at(i) != 'n') {
            if(s.at(i + 1) != 'a' && s.at(i + 1) != 'o' && s.at(i + 1) != 'u' && s.at(i + 1) != 'i' && s.at(i + 1) != 'e') {
                cout << "NO\n";
                return 0;
            }
        }
    }

    if(s.at(n) != 'a' && s.at(n) != 'o' && s.at(n) != 'u' && s.at(n) != 'i' && s.at(n) != 'e' && s.at(n) != 'n') cout << "NO\n";
    else cout << "YES\n";

    return 0;
}
