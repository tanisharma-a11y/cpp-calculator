#include <iostream>
#include <string>
using namespace std;

int main() {
    int score = 0;
    string answer;

    cout << "=== Programming Language Quiz ===\n";

    // Question 1
    cout << "\n1. Which language is known for system-level programming?\n";
    cout << "a) Python\nb) C++\nc) Java\n";
    cout << "Enter answer: ";
    cin >> answer;
    if (answer == "b" || answer == "B") score++;

    // Question 2
    cout << "\n2. Which language is primarily used for web development?\n";
    cout << "a) JavaScript\nb) C\nc) Rust\n";
    cout << "Enter answer: ";
    cin >> answer;
    if (answer == "a" || answer == "A") score++;

    // Question 3
    cout << "\n3. Which language is popular for data science?\n";
    cout << "a) Python\nb) C++\nc) PHP\n";
    cout << "Enter answer: ";
    cin >> answer;
    if (answer == "a" || answer == "A") score++;

    // Question 4
    cout << "\n4. Which language uses 'printf' for output?\n";
    cout << "a) Java\nb) C\nc) Python\n";
    cout << "Enter answer: ";
    cin >> answer;
    if (answer == "b" || answer == "B") score++;

    // Show results
    cout << "\nYour Score: " << score << "/4\n";

    if (score == 4)
        cout << "Excellent!\n";
    else if (score >= 2)
        cout << "Good job!\n";
    else
        cout << "Keep learning!\n";

    return 0;
}