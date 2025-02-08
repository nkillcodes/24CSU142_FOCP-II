#include <iostream>
using namespace std;

void reverse_string(string &str);
bool check_palindrome(string str, string reversed);
void count_char_frequencies(string str);
void replace_vowels_with_symbol(string &str, char symbol);

int main() {
    string input_str;
    cout << "enter a string: ";
    getline(cin, input_str);

    string reversed_str = input_str;
    reverse_string(reversed_str);

    if (check_palindrome(input_str, reversed_str))
        cout << "string is palindrome!!\n";
    else
        cout << "string is not a palindrome!!\n";

    count_char_frequencies(input_str);

    char replacement_symbol;
    cout << "\nenter the symbol to replace vowels: ";
    cin >> replacement_symbol;

    replace_vowels_with_symbol(input_str, replacement_symbol);
    cout << input_str;

    return 0;
}

void reverse_string(string &str) {
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

bool check_palindrome(string str, string reversed) {
    return str == reversed;
}

void count_char_frequencies(string str) {
    int freq[25] = {0};

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ')
            freq[(int)str[i]]++;
    }

    cout << "\nfrequencies:\n";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ' && freq[(int)str[i]] > 0) {
            cout << str[i] << ": " << freq[(int)str[i]] << endl;
            freq[(int)str[i]] = 0;
        }
    }
}

void replace_vowels_with_symbol(string &str, char symbol) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {
            str[i] = symbol;
        }
    }
}
