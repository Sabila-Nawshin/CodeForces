#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;

    bool capsOn = true;
    char firstChar = s.at(0);
    s.erase(s.begin());

    for (int i = 0; i < s.size(); i++) if(s.at(i) >= 'a') capsOn = false;

    if (capsOn && firstChar >= 'A' && firstChar <= 'Z') firstChar += 32;
    else if (capsOn && firstChar >= 'a' && firstChar <= 'z') firstChar -= 32;

    if(capsOn) transform (s.begin(), s.end(), s.begin(), ::tolower);

    cout << firstChar << s << endl;

    return 0;
}
