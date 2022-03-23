#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Part 1 (Enter one integer)
    int number = 0;
    cout << "Enter one integer: ";
    cin >> number;
    cout << "You entered the number: " << number << "\n";

    // Part 2 (Enter four integers)
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;

    cout << "Enter four integers: ";
    cin >> num1 >> num2 >> num3 >> num4;
    cout << "You entered the numbers: " << num1 << " " << num2 << " " << num3 << " " << num4 << "\n";

    // Part 3 (Enter one integer and one real number)
    double real = 0;
    int int1 = 0;

    cout << "Enter one integer and one real number: ";
    cin >> real >> int1;
    cout << "The real is: " << real << "\n";
    cout << "The integer is: " << int1 << "\n";

    // Part 4 (Enter one real and one integer)
    double real1 = 0;
    int int2 = 0;

    cout << "Enter one integer and one real number: ";
    cin >> real1 >> int2;
    cout << "The real is: " << real1 << "\n";
    cout << "The integer is: " << int2 << "\n";
    
    // Part 5 (Enter a character)
    char character{};

    cout << "Enter a character: ";
    cin >> character;
    cout << "You entered: " << character << "\n";

    // Part 6 (Enter a word)
    string word{};

    cout << "Enter a word: ";
    cin >> word;
    cout << "The word '" << word << "' has " << word.size() << "character(s).\n";

    // Part 7 (Enter an integer and a word)
    int int3 = 0;
    string word2{};

    cout << "Enter an integer and a word: ";
    cin >> int3 >> word2;
    cout << "You entered: '" << int3 << "' and '" << word2 << "'.\n";

    // Part 8 (Enter a character and a word)
    char character2{};
    string word3{};

    cout << "Enter a character and a word: ";
    cin >> character2 >> word3;
    cout << "You entered the string '" << word3 << "' and the character '" << character2 << ".\n";

    // Part 9 (Enter a word and a real number)
    string word4{};
    double real3 = 0;

    cout << "Enter a word and a real number: ";
    cin >> word4 >> real3;
    cout << "You entered the string '" < word4 << "' and '" << real3 << "'.\n";

    // Part 10 (Enter a text-line)
    string sentence{};

    cout << "Enter a text-line: ";
    cin >> sentence;
    cout << "You entered: '" << sentence << ".'\n";

    // Part 11 (Enter a second line of text)
    string sentence1{};

    cout << "Enter a second line of text: ";
    cin >> sentence1;
    cout << "You entered: '" << sentence1 << ".'\n";

    // Part 12 (Enter three words)
    string w1{};
    string w2{};
    string w3{};

    cout << "Enter three words: ";
    cin >> w1 >> w2 >> w3;
    cout << "You entered: '" << w1 << " " << w2 << " " << w3 << ".'\n";

    return 0;
}

