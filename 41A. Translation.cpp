
#include <iostream>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    if(s1.size() != s2.size()) cout << "NO\n";
    else{
        int j = s2.size() - 1;

        for (int i = 0; i < s1.size(); i++) {
            if (s1.at(i) != s2.at(j)) break;
            j--;

        }
        if (j == -1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
