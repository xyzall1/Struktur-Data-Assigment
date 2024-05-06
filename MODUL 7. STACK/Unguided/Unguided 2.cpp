#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

string reverseWordsAndChars(string str) {
    istringstream iss(str);
    stack<string> s;
    string word;

    while (iss >> word) {
        string reversedWord = "";
        for (int i = word.length() - 1; i >= 0; i--) {
            reversedWord += word[i];
        }
        s.push(reversedWord);
    }

    string reversed = "";
    while (!s.empty()) {
        reversed += s.top();
        s.pop();
        if (!s.empty()) {
            reversed += " ";
        }
    }

    return reversed;
}

int main() {
    string input;
    cout << "Kalimat : ";
    getline(cin, input);

    string reversed = reverseWordsAndChars(input);
    cout << "Hasil : " << reversed << endl;

    return 0;
}