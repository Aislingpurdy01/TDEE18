#include <iostream>
#include <string>

using namespace std;

int main()
{
  //Part 1
  int number = 0;
  cout << "Enter one integer: ";
  cin >> number;
  cout << "You entered the number: " << number << "\n";

  //Part 2
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  int num4 = 0;
  cout << "Enter four integers: ";
  cin >> num1 >> num2 >> num3 >> num4;
  cout << "You entered the numbers: " << num1 << " " << num2 << " " << num3 << " " << num4 << "\n"; 

  //Part 3
  int int1 = 0;
  double real = 0;
  cout << "Enter one integer and one real number: ";
  cin >> int1 >> real;
  cout << "The integer is: " << int1 << "\n";
  cout << "The real is: " << real << "\n";

  //Part 4
  int int2 = 0;
  double real2 = 0;
  cout << "Enter one real number and one integer: ";
  cin >> real2 >> int2;
  cout << "The real is: " << real2 << "\n";
  cout << "The integer is: " << int2 << "\n";

  //Part 5
  char character{};
  cout << "Enter a character: ";
  cin >> character;
  cout << "You entered: " << character << "\n";

  //Part 6
  string word{};
  cout << "Enter a word: ";
  cin >> word;
  cout << "The word '" << word << "' has " << word.size() << " characters.\n";

  //Part 7
  int int3 = 0;
  string word2{};
  cout << "Enter an integer and a word: ";
  cin >> int3 >> word2;
  cout << "You entered '" << int3 << "' and '" << word2 << "'.\n";

  //Part 8
  char character2{};
  string word3{};
  cout << "Enter an character and a word: ";
  cin >> character2 >> word3;
  cout << "You entered the letter '" << character2 << "' and the word '" << word3 << "'.\n";

  //Part 9
  string word4{};
  double real3 = 0;
  cout << "Enter a word and a real number: ";
  cin >> word4 >> real3;
  cout << "You entered '" << word4 << "' and '" << real3 << "'.\n";

  //Part 10
  string sentence{};
  cout << "Enter a text-line: ";
  cin >> sentence;
  cout << "You entered: '" << sentence << ".'\n";

  //Part 11
  string sentence1{};
  cout << "Enter a second line of text: ";
  cin >> sentence1;
  cout << "You entered: '" << sentence1 << ".'\n";

  //Part 12
  string a{};
  string b{};
  string c{};
  cout << "Enter three words: ";
  cin >> a >> b >> c;
  cout << "You entered: '" << a << " " << b << " " << c << ".'\n";

  return 0;
}