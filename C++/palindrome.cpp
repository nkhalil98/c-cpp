#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(string);

int main()
{
    string word;
    cout << "Enter a word:" << endl;
    cin >> word;
    cout << word << " is a palindrome? " << is_palindrome(word) << endl;
    return 0;
}

bool is_palindrome(string word) {
    string reversed;
    for (int i = word.size()-1; i >= 0; i--) {
        reversed += word[i];
    }
    return word == reversed;
}      