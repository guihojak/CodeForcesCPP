#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string str;
    for (int i = 0; i < n; i++) {
        cin >> str;
        int len = str.length();
        if (len > 10)
            cout << str[0] << len - 2 << str[len - 1] << endl;
        else
            cout << str << endl;
    }

    return 0;
}

