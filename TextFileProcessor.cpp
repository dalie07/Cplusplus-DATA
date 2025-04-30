#include <iostream>
#include <fstream> // For file handling
#include <string>
#include <cctype> // For character manipulation
#include <sstream> // For splitting words
#include <algorithm> // For reverse function
using namespace std;

// Function to count vowels in a string
int countVowels(const string& text) {
    int count = 0;
    for (char c : text) {
        c = tolower(c); // Convert to lowercase for comparison
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

// Function to count words in a string
int countWords(const string& text) {
    stringstream ss(text);
    string word;
    int count = 0;
    while (ss >> word) {
        count++;
    }
    return count;
}

// Function to reverse a string
string Reverse(const string& text) {
    string reversed = text;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

// Function to capitalize the second letter of each word
string capitalizeSecondLetter(const string& text) {
    stringstream ss(text);
    string word, result;
    while (ss >> word) {
        if (word.length() > 1) {
            word[1] = toupper(word[1]); // Capitalize the second letter
        }
        result += word + " ";
    }
    if (!result.empty()) {
        result.pop_back(); // Remove the trailing space
    }
    return result;
}

int main() {
    // Open the text file
    ifstream inputFile("textfile.txt");
    if (!inputFile) {
        cerr << "Error: Could not open the file." << endl;
        return 1;
    }

    // Read the contents of the file into a string
    string fileData((istreambuf_iterator<char>(inputFile)), istreambuf_iterator<char>());
    inputFile.close();

    // Output the original text
    cout << "Original Text: " << fileData << endl;

    // Count and output the number of vowels
    int vowelCount = countVowels(fileData);
    cout << "Number of vowels: " << vowelCount << endl;

    // Count and output the number of words
    int wordCount = countWords(fileData);
    cout << "Number of words: " << wordCount << endl;

    // Reverse the text and output it
    string reversedText = Reverse(fileData);
    cout << "Reversed Text: " << reversedText << endl;

    // Capitalize the second letter of each word and output it
    string capitalizedText = capitalizeSecondLetter(fileData);
    cout << "Text with second letter capitalized: " << capitalizedText << endl;

    return 0;
}