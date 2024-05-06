#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Kalimat : ";
    getline(cin, input);

    stack<char> s;
    for (char c : input) {
        s.push(c);
    }

    string reversed = "";
    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }

    if (input == reversed) {
        cout << "Kalimat tersebut adalah polindrom" << endl;
    } else {
        cout << "Kalimat tersebut adalah bukan polindrom." << endl;
    }

    return 0;
}