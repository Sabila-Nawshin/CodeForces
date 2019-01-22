#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    bool executable = false;
    for (int i = 0; i < s.size(); i++) if(s.at(i) == 'H' || s.at(i) == 'Q' || s.at(i) == '9') executable = true;

    if(executable) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
