#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    int word_count = 0;
    int longest = 0;
    int shortest = 0;
    float average = 0;
    int count = 0;

    // Reading file
    fstream file;
    string word, t, q, filename;
    filename = "test.txt";
    file.open(filename.c_str());

    string largest = "";
    string smallest = "";

    // Taking words from the file
    while (file >> word)
    {
        if (word.length() > longest)
        {
            longest = word.length();
            largest = word;
        }

        if (word.size() < longest)
        {
            shortest = word.length();
            smallest = word;
        }
    
        // average
        average = average + word.length();
        word_count = word_count + 1;
    }

    average = average / word.length();

    cout << "There are " << word_count << " words in the file." << endl;
    cout << "The shortest word was '" << smallest << "' with " << shortest << " character(s)." << endl;
    cout << "The longest word was '" << largest << "' with " << longest << " character(s)." << endl;
    cout << "The average length was " << average << " character(s)." << endl;

    return 0;

}