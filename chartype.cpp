

#include <iostream>
#include <cctype>

int main() {
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;

    if (std::isdigit(ch)) {
        std::cout << ch << " is a digit" << std::endl;
    } else if (std::isalpha(ch)) {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            std::cout << ch << " is a vowel" << std::endl;
        } else {
            std::cout << ch << " is a consonant" << std::endl;
        }
    } else if (std::ispunct(ch)) {
        std::cout << ch << " is punctuation" << std::endl;
    } else {
        std::cout << ch << " is unrecognised" << std::endl;
    }

    return 0;
}

